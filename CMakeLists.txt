cmake_minimum_required(VERSION 3.28)
project(Game)

set(CMAKE_CXX_STANDARD 14)
include_directories(headers)

add_executable(RPSGame
        headers/Bot.hpp
        headers/Game.hpp
        headers/Players.hpp
        headers/User_Player.hpp
        source/Bot.c++
        source/Game.c++
        source/Players.c++
        source/User_Player.c++
        Main.c++
        headers/Main.hpp
)
