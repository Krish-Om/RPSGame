//
// Created by krishom on 7/27/24.
//
#ifndef GAME_BOT_HPP
#define GAME_BOT_HPP
#include "Players.hpp"
class Bot : virtual public Players{
public:
    Bot();
    void setChoice() override;
    ~Bot() override;
};
#endif //GAME_BOT_HPP
