ARG DIST=ubuntu:noble

FROM ${DIST}

LABEL maintainer="AnHeuermann"
LABEL description="Cross-compile C FMUs for Linux and Windows"

COPY toolchain/ /opt/cmake/toolchain/

# Install build dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    binutils-mingw-w64 \
    build-essential \
    ca-certificates \
    clang \
    cmake \
    curl \
    g++ \
    g++-multilib \
    gcc \
    gcc-multilib \
    git \
    make \
    mingw-w64 \
    pkg-config \
    unzip \
    && rm -rf /var/lib/apt/lists/*
