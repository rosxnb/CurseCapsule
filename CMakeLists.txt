cmake_minimum_required(VERSION 3.30)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(LIB_NAME CurseCapsule)

project(${LIB_NAME}
    VERSION 2024.09
    LANGUAGES C CXX
)

add_subdirectory(CurseCapsule)
add_subdirectory(Sandbox)
