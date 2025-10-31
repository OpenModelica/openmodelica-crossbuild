ARG DIST=ubuntu:24.04

FROM ${DIST}

# Image / OCI metadata
LABEL maintainer="AnHeuermann"
LABEL description="Cross-compile C FMUs for Linux and Windows"
LABEL organization="OpenModelica"

LABEL org.opencontainers.image.vendor="OpenModelica"
LABEL org.opencontainers.image.authors="AnHeuermann"
LABEL org.opencontainers.image.version="v1.26.0-dev"
LABEL org.opencontainers.image.description="Cross-compile C FMUs for Linux and Windows"
LABEL org.opencontainers.image.source="https://github.com/OpenModelica/openmodelica-crossbuild/"
LABEL org.opencontainers.image.license="AGPL VERSION 3 OR OSMC-PL VERSION 1.8"

# Copy toolchain files
COPY toolchain/ /opt/cmake/toolchain/

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
