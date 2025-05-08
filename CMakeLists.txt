cmake_minimum_required(VERSION 3.12)
project(oop-project)

set(CMAKE_C_STANDARD 23)
set(CMAKE_CXX_STANDARD 23)

file(GLOB SOURCES src/*.cpp)
add_executable(oop-project ${SOURCES})

set(CMAKE_CXX_FLAGS
    "-fsanitize=address -fsanitize=undefined -fstack-protector-strong -Wno-unused-result -Wall -Wextra -Wconversion -Werror=uninitialized -Werror=vla -Werror=return-type -Wshadow -Wnull-dereference -Wformat -Wformat-security -Wstrict-overflow -Wstrict-prototypes -Wcast-align -Wredundant-decls -Wpedantic -Werror"
)
