//
// Created by krishom on 7/27/24.
//

#ifndef GAME_USER_PLAYER_HPP
#define GAME_USER_PLAYER_HPP

#include "Players.hpp"

class User_Player : virtual public Players{
public:
    User_Player();
    void setChoice() override;
    static void roundWinner(int result, int i,User_Player&,User_Player&);
    ~User_Player() override;

};

#endif //GAME_USER_PLAYER_HPP
