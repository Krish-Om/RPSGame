//
// Created by krishom on 7/27/24.
//
#ifndef GAME_GAME_HPP
#define GAME_GAME_HPP

#include "User_Player.hpp"
#include "Bot.hpp"

void clearScreen();
void scoreBoard(User_Player&, User_Player&);
void scoreBoard(User_Player&, Bot&);
void intro();
void start();
class Game{
public:
    Game();

    void init();
    void singlePlayer();
    void multiPlayer();
    void modeSelection();
    void roundSelection();
    void startGame();
    void startGame(User_Player&,User_Player&);
    void Outro(int);
    void roundWinner(int,int);
    static void playAgain();
    static void determineWinner(User_Player player, Bot bot);
    static void determineWinner(User_Player player1, User_Player player2);

private:
    unsigned int rounds{};
    User_Player player;
    Bot bot;


};

#endif //GAME_GAME_HPP
