ARG DIST=ubuntu:noble

FROM ${DIST}

# Image / OCI metadata
LABEL maintainer "AnHeuermann"
LABEL description "Cross-compile C FMUs for Linux and Windows"
LABEL organization "OpenModelica"

LABEL org.opencontainers.image.vendor "OpenModelica"
LABEL org.opencontainers.image.authors "AnHeuermann"
LABEL org.opencontainers.image.version "v1.26.0-dev"
LABEL org.opencontainers.image.description "Cross-compile C FMUs for Linux and Windows"
LABEL org.opencontainers.image.source "https://github.com/OpenModelica/openmodelica-crossbuild/"
LABEL org.opencontainers.image.license "AGPL VERSION 3 OR OSMC-PL VERSION 1.8"

# Copy toolchain files
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
    zip \
    && rm -rf /var/lib/apt/lists/*
