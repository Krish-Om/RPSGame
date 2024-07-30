cmake_minimum_required(VERSION 3.28)
project(RPSGame)

set(CMAKE_CXX_STANDARD 14)

include_directories(headers)

add_executable(RPSGame
        include/header/Bot.hpp
        include/header/Game.hpp
        include/header/Main.hpp
        include/header/Players.hpp
        include/header/User_Player.hpp
        source/Bot.c++
        source/Game.c++
        source/Players.c++
        source/User_Player.c++
        Main.c++)
