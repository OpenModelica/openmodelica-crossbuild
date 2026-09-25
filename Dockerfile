ARG DIST=ubuntu:24.04

FROM ${DIST}

# Image / OCI metadata
LABEL maintainer="AnHeuermann"
LABEL description="Cross-compile C and Rust FMUs for Linux and Windows"
LABEL organization="OpenModelica"

LABEL org.opencontainers.image.vendor="OpenModelica"
LABEL org.opencontainers.image.authors="AnHeuermann"
LABEL org.opencontainers.image.description="Cross-compile C and Rust FMUs for Linux and Windows"
LABEL org.opencontainers.image.source="https://github.com/OpenModelica/openmodelica-crossbuild/"
LABEL org.opencontainers.image.license="AGPL VERSION 3 OR OSMC-PL VERSION 1.8"

# enable universe if needed (on official Ubuntu bases)
RUN apt-get update && \
    apt-get install -y --no-install-recommends software-properties-common && \
    add-apt-repository -y universe && \
    apt-get update && \
    apt-get install -y --no-install-recommends \
        binutils-mingw-w64 \
        build-essential \
        ca-certificates \
        clang \
        cmake \
        crossbuild-essential-arm64 \
        crossbuild-essential-armel \
        crossbuild-essential-armhf \
        crossbuild-essential-i386 \
        curl \
        g++ \
        gcc \
        git \
        make \
        mingw-w64 \
        pkg-config \
        unzip \
        zip \
    && rm -rf /var/lib/apt/lists/*

# Rust toolchain for FMUs whose simulation runtime is Rust. World-writable like
# the official rust image, since the image is run with --user.
ENV RUSTUP_HOME=/opt/rust/rustup \
    CARGO_HOME=/opt/rust/cargo \
    PATH=/opt/rust/cargo/bin:$PATH \
    RUST_VERSION=1.98.1 \
    RUSTUP_VERSION=1.29.1 \
    RUSTUP_SHA256=dda7234360b7f578ca8b0ddcb80145646fa61a67c1720a5abc7051b35c9fcb71

RUN curl -sSfL -o /tmp/rustup-init \
        "https://static.rust-lang.org/rustup/archive/${RUSTUP_VERSION}/x86_64-unknown-linux-gnu/rustup-init" && \
    echo "${RUSTUP_SHA256} */tmp/rustup-init" | sha256sum -c - && \
    chmod +x /tmp/rustup-init && \
    /tmp/rustup-init -y --no-modify-path --profile minimal \
        --default-toolchain ${RUST_VERSION} --default-host x86_64-unknown-linux-gnu \
        --target i686-unknown-linux-gnu,aarch64-unknown-linux-gnu,armv5te-unknown-linux-gnueabi,armv7-unknown-linux-gnueabihf,i686-pc-windows-gnu,x86_64-pc-windows-gnu && \
    rm /tmp/rustup-init && \
    chmod -R a+w ${RUSTUP_HOME} ${CARGO_HOME} && \
    cargo --version && rustc --version

ENV CARGO_TARGET_I686_UNKNOWN_LINUX_GNU_LINKER=i686-linux-gnu-gcc \
    CARGO_TARGET_AARCH64_UNKNOWN_LINUX_GNU_LINKER=aarch64-linux-gnu-gcc \
    CARGO_TARGET_ARMV5TE_UNKNOWN_LINUX_GNUEABI_LINKER=arm-linux-gnueabi-gcc \
    CARGO_TARGET_ARMV7_UNKNOWN_LINUX_GNUEABIHF_LINKER=arm-linux-gnueabihf-gcc \
    CARGO_TARGET_I686_PC_WINDOWS_GNU_LINKER=i686-w64-mingw32-gcc \
    CARGO_TARGET_X86_64_PC_WINDOWS_GNU_LINKER=x86_64-w64-mingw32-gcc

# Copy toolchain files
COPY toolchain/ /opt/cmake/toolchain/
