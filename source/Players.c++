// By adding #ifndef PLAYERS_H, #define PLAYERS_H, and #endif around the entire content of Players.c++, you ensure that
//  the compiler only includes it once, preventing the multiple definition errors.


#include<iostream>
#include<iomanip>

using namespace std;
#include "../include/Players.hpp"
    Players :: Players(){
        this->score = 0;
    }

    void Players :: setState(unsigned int ch) {
        this->choice = ch;
    }

     void Players :: choiceInfo() {
        cout << "\nEnter a choice :" << endl;
        cout << "----------------------------------------------------------------------------------------"
             << endl
             << "1.Rock🪨 2.Paper🧻 3.Scissor✂️" << setw(10) << endl;
        cout << "-----------------------------------------------------------------------------------------"
             << endl;
    }

    int Players :: compare(Players &p2)  {
        if (this->choice == p2.choice)
            return 0;
        else if ((this->choice == ROCK && p2.choice == SCISSOR) ||
                 (this->choice == PAPER && p2.choice == ROCK) ||
                 (this->choice == SCISSOR && p2.choice == ROCK)) {
            return 1;
        }else{
            return -1;
        }
    }
    Players::~Players(){}

int Players::getScore() {
    return this->score;
}

void Players::operator++() {
    ++this->score;
}

bool Players::operator==(Players &p) {
    return (this->score == p.score);
}

bool Players::operator>(Players &p) {
    return (this->score > p.score);
}