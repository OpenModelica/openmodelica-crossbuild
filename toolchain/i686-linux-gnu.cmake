# Toolchain for 32-bit Linux
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR x86)

# Compiler
set(CMAKE_C_COMPILER gcc)
set(CMAKE_C_FLAGS "-m32" CACHE STRING "" FORCE)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "-m32" CACHE STRING "" FORCE)
set(CMAKE_EXE_LINKER_FLAGS "-m32" CACHE STRING "" FORCE)

# Root path for cross-compiled libraries
set(CMAKE_FIND_ROOT_PATH /usr /usr/lib/i386-linux-gnu)

# Configure search for external dependencies
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
