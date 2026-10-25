cmake_minimum_required(VERSION 4.3)
project(RockPaperScissors)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled src/main.cpp
        src/RPCChoice.cpp
        src/RPCChoice.h
        src/playerChoice.cpp
        src/playerChoice.h)
