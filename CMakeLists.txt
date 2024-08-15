cmake_minimum_required(VERSION 3.28)
project(RPSGame)

set(CMAKE_CXX_STANDARD 14)

include_directories(headers)

add_executable(RPSGame
        include/Bot.hpp
        include/Game.hpp
        include/Main.hpp
        include/Players.hpp
        include/User_Player.hpp
        source/Bot.c++
        source/Game.c++
        source/Players.c++
        source/User_Player.c++
        Main.c++
        source/utils.cpp
        include/utils.hpp
)
