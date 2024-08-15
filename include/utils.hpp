
#ifndef RPSGAME_UTILS_HPP
#define RPSGAME_UTILS_HPP
#include "ctime"
#include "fstream"
#include <cstdlib>
#include "unistd.h"
#include "iostream"
#include "User_Player.hpp"
#include "Bot.hpp"
#include "string"
using namespace std;
void clearScreen();
void scoreBoard(User_Player&, User_Player&);
void scoreBoard(User_Player&, Bot&);
void intro();
void comparingScores();
void writeScores(const string& player1, const int& score1, const string& player2,const int& score2);

#endif