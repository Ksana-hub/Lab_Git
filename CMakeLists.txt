cmake_minimum_required(VERSION 3.10)
project(BinaryIO_Lab)

set(CMAKE_CXX_STANDARD 17)

# Статическая библиотека
add_library(BinarySerializer STATIC
    static/src/BinarySerializer.cpp
)

target_include_directories(BinarySerializer PUBLIC
    static/include
)

# Динамическая библиотека
add_library(BinaryFileHandler SHARED
    dynamic/src/BinaryFileHandler.cpp
)

target_include_directories(BinaryFileHandler PUBLIC
    dynamic/include
    static/include
)

target_link_libraries(BinaryFileHandler BinarySerializer)

# Пример программы
add_executable(example
    example/main.cpp
)

target_link_libraries(example
    BinaryFileHandler
    BinarySerializer
)
