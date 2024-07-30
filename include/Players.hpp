//
// Created by krishom on 7/27/24.
//

#ifndef GAME_PLAYERS_HPP
#define GAME_PLAYERS_HPP

enum userChoice {
    ROCK = 1, PAPER = 2, SCISSOR = 3
};

class Players {
private:
    unsigned int choice;
protected:
    unsigned int score;
public:
    Players();
    void setState(unsigned int);
    int getScore();
    void operator++();
    bool operator ==(Players&);
    bool operator >(Players&);
    virtual void setChoice() = 0;
    static void choiceInfo();
    int compare(Players&);
    virtual ~Players();
};

#endif //GAME_PLAYERS_HPP