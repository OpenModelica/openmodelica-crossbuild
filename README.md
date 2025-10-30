# OpenModelica Cross Compile Docker Image

[![Build Docker Image][gh-build-badge]][gh-build-workflow]
[![Publish Docker Image][gh-publish-badge]][gh-publish-workflow]

The Docker image used to cross compile OpenModelica FMUs from Linux to target
platforms and create multi-platform FMUs.

## Toolchains

| Toolchain file                           | OS                    | C                      | Note    |
|------------------------------------------|-----------------------|------------------------|---------|
| [i686-linux-gnu][i686-linux-gnu]         | x86-64 Linux 32-bit   | gcc -m32               |         |
| [x86_64-linux-gnu][x86_64-linux-gnu]     | x86-64 Linux 64-bit   | gcc -m64               |         |
| [i686-w64-mingw32][i686-w64-mingw32]     | x86-64 Windows 32-bit | i686-w64-mingw32-gcc   | MINGW   |
| [x86_64-w64-mingw32][x86_64-w64-mingw32] | x86-64 Windows 64-bit | x86_64-w64-mingw32-gcc | MINGW   |

## Versioning

The cross compilation image is versioned together with the version number of
OpenModelica. So OpenModelica `v1.26.0` expects to use this image with tag
`v1.26.0` for cross compiling Linux and Windows.

## Build

```bash
export TAG=v1.26.0
docker build --pull --no-cache --tag crossbuild:$TAG .
```

## Example usage inside container

### Windows 32-bit

```bash
cd path/to/FMU/sources/
cmake -S . -B build_win32 -DCMAKE_TOOLCHAIN_FILE=/opt/cmake/toolchain/i686-w64-mingw32.cmake
cmake --build build_win32 --target create_fmu
```

### Windows 64-bit

```bash
cd path/to/FMU/sources/
cmake -S . -B build_win64 -DCMAKE_TOOLCHAIN_FILE=/opt/cmake/toolchain/x86_64-w64-mingw32.cmake
cmake --build build_win64 --target create_fmu
```

### Linux 32-bit

```bash
cd path/to/FMU/sources/
cmake  -S . -B build_linux32 -DCMAKE_TOOLCHAIN_FILE=/opt/cmake/toolchain/i686-linux-gnu.cmake
cmake --build build_linux32 --target create_fmu
```

### Linux 64-bit

```bash
cd path/to/FMU/sources/
cmake  -S . -B build_linux64 -DCMAKE_TOOLCHAIN_FILE=/opt/cmake/toolchain/x86_64-linux-gnu.cmake
cmake --build build_linux64 --target create_fmu
```

## Upload

The [publish.yml][gh-publish-file] workflow will build and
upload the Docker image to
[OpenModelica/crossbuild][docker-hub]
for each release.

To do it manually run:

```bash
export REGISTRY=openmodelica
export TAG=v1.26.0
docker login
docker image tag crossbuild:$TAG $REGISTRY/crossbuild:$TAG
docker push $REGISTRY/crossbuild:$TAG
```

## License

The Dockerfile is licensed withthe MIT License, see
[LICENSE.md][license].
The C test files in test/resources are part of OpenModelica and licensed with
PUBLIC LICENSE (OSMC-PL) VERSION 1.8, see
[test/resources/OSMC-License.txt][osmc-license].

[gh-build-badge]: https://github.com/OpenModelica/crossbuild/actions/workflows/build.yml/badge.svg?branch=main
[gh-build-workflow]: https://github.com/OpenModelica/crossbuild/actions/workflows/build.yml
[gh-publish-badge]: https://github.com/OpenModelica/crossbuild/actions/workflows/publish.yml/badge.svg
[gh-publish-workflow]: https://github.com/OpenModelica/crossbuild/actions/workflows/publish.yml
[i686-linux-gnu]: ./toolchain/i686-linux-gnu.cmake
[x86_64-linux-gnu]: ./toolchain/x86_64-linux-gnu.cmake
[i686-w64-mingw32]: ./toolchain/i686-w64-mingw32.cmake
[x86_64-w64-mingw32]: ./toolchain/x86_64-w64-mingw32.cmake
[gh-publish-file]: ./.github/workflows/publish.yml
[docker-hub]: https://hub.docker.com/repository/docker/OpenModelica/crossbuild
[license]: ./LICENSE.md
[osmc-license]: ./test/resources/OSMC-License.txt
