
#ifndef RPSGAME_UTILS_HPP
#define RPSGAME_UTILS_HPP

#include <fstream>
#include <cstdlib> // for system("clear")
#include "unistd.h" // for usleep and 
#include "string"
#include "iostream"

#include "User_Player.hpp"
#include "Bot.hpp"
using namespace std;
void clearScreen();
void scoreBoard(User_Player&, User_Player&);
void scoreBoard(User_Player&, Bot&);
void intro();
void comparingScores();
void writeScores(const string& player1, const int& score1, const string& player2,const int& score2);

#endif