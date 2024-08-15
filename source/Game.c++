#include <iostream>
#include "unistd.h"
#include "../include/Game.hpp"


using namespace std;

//helper functions
void start(){
    system("clear");
    clearScreen();
    intro();
    Game g;
}
void clearScreen() {
    if (isatty(STDOUT_FILENO)) {
        system("clear || cls");
    } else {
        cerr << " No terminal detected " << endl;
    }
}
void intro(){
    clearScreen();
    cout << "💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥\n" << endl;
    cout << "\aWelcome to exciting CLI RPS game:\a " << endl;
    cout << "\n💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥\n" << endl;
}
void scoreBoard(User_Player& p1, User_Player& p2) {
    cout << "\n\nPlayer 1 Score : " << p1.getScore() << endl;
    cout << "\n\nPlayer 2 Score : " << p2.getScore() << endl;
}
void comparingScores() {
    cout << "Comparing scores";
    cout.flush(); // Ensure the initial message is printed immediately

    for (int i = 0; i < 10; ++i) { // Adjust the loop count for desired loading bar length
        usleep(300000); // 300 milliseconds delay
        cout << ".";
        cout.flush(); // Ensure each dot is printed immediately
    }

    clearScreen();
}
void scoreBoard(User_Player& p1, Bot& p2) {
    cout << "\n\nPlayer Score : " << p1.getScore() << endl;
    cout << "\n\nBot Score : " << p2.getScore() << endl;
}
void Game :: roundWinner(int res, int nround) {
    if (res == 0){
        cout << "\n\n\n\n";
        cout << " 😅 Round " << nround + 1 << ": is Draw!" << endl;
        cout << "\n\n\n\n";
        
    }
    else if (res == 1) {
        cout << "\n\n\n\n";
        ++player;
        cout << "🤩 Round " << nround + 1 << ": you won!" << endl;
        cout << "\n\n\n\n";
    }else{
        cout << "\n\n\n\n";
        ++bot;
        cout << "🥲 Round " << nround + 1 << ": you lose!" << endl;
        cout << "\n\n\n\n";
    }
}

//member functions
Game::Game() { // default best of 3 mode
    init();
}

void Game::init() {
    modeSelection();
}

void Game::modeSelection() {
    int mode;
    bool validMode = false;
    while (!validMode) {
        cout << "Please select your mode :" << endl;
        cout << "0. Player vs Bot\t 1. Player vs Player" << endl;
        cin >> mode;
        if (mode == 0 || mode == 1) {
            validMode = true;
            switch (mode) {
                case 0:
                    // singleplayer mode
                    this->singlePlayer();
                    break;
                case 1:
                    // multiplayer mode
                    this->multiPlayer();
                    break;
            }
        } else {
            cout << "⚠️⚠️⚠️ Input Error : Invalid mode selected ⚠️⚠️⚠️" << endl;
            cout << "Please re-choose the mode correctly !" << endl;
        }
    }
}
void Game::roundSelection() {
    clearScreen();
    int rmode;
    bool validMode = false;
    while (!validMode) {
        cout << "Please choose the round-mode you want to play:"
                "\n1.Default(Best of 3 rounds)\t 2.Custom no. of rounds"
             << endl;
        cin >> rmode;
        switch (rmode) {
            case 1:
                this->rounds = 3;
                validMode = true;
                break;
            case 2:
                // customized no of rounds
                cout << "Please enter the number of rounds you want to play :" << endl;
                cin >> this->rounds;
                if (this->rounds < 1) {
                    cout << "Error : User Input for rounds may have been less than 1 or negative!!! " << endl;
                    cout << "Please re-enter the number of rounds you want to play :" << endl;
                    cin >> this->rounds;
                } else {
                    validMode = true;
                }
                break;
            default:
                cerr << "Invalid User Choice" << endl;
                cout << "Please re-choose the round mode correctly !" << endl;
                break;
        }
    }
}
void Game::singlePlayer() {
    this->roundSelection(); // rounds = 3
    this->startGame();
}

void Game::multiPlayer() {
    this->roundSelection();
    User_Player p1, p2;
    this->startGame(p1, p2);
}

void Game::startGame(User_Player &p1, User_Player &p2) {
    int i;
    for (i = 0; i < this->rounds; i++) {
        Players::choiceInfo();
        p1.setChoice();
        clearScreen();

        Players::choiceInfo();
        p2.setChoice();
        clearScreen();

        int result = p1.compare(p2);
        User_Player :: roundWinner(result, i,p1,p2);
    }

    determineWinner(p1,p2);
    scoreBoard(p1, p2);
    this->Outro(i);
}

void Game::startGame() {
    int i;
    for (i = 0; i < this->rounds; i++) {
        Players::choiceInfo();
        player.setChoice();
        clearScreen();
        bot.setChoice();

        int result = player.compare(bot);
        Game::roundWinner(result, i);
    }
    determineWinner(player, bot);
    scoreBoard(player, bot);
    this->Outro(i);
}

void Game::Outro(int nround) {
    if (nround == this->rounds) {
        Game::playAgain();
    } else {
        cout << "😇😇😇 Thank you for Playing! Hope you enjoyed it. 😇😇😇" << endl;
        exit(0);
    }
}

void Game::playAgain() {

    cout << "Would like to give an another go ?😁😁😁\n" << endl;
    cout << " 🥺 yes(y) or 😉anyother character to exit.\n" << endl;
    char ch;
    cin >> ch;
    if (ch == 'y') {
        new Game();
    } else {
        cout << "😇😇😇 Thank you for Playing! Hope you enjoyed it. 😇😇😇" << endl;
        exit(0);
    }
}

void Game::determineWinner(User_Player player, Bot bot) {
    comparingScores();
    if ((player == bot)){

        cout << "\n\n\n\n";
        cout << "\n\n \t🙃🙃🙃 It's a draw! 🙃🙃🙃 \n\n" << endl;
        cout << "\n\n\n\n";

    }
    else if (player.getScore() > bot.getScore()) {
        cout << "\n\n\n\n";
        cout << "\n\n 🥳🥳🥳 Player wins! 🥳🥳🥳\n\n " << endl;
        cout << "\n\n\n\n";

    } else {
        cout << "\n\n\n\n";
        cout << "\n\n\n 😎 🤖😎 Bot wins! 🤖😎🤖 \n\n\n " << endl;
        cout << "\n\n\n\n";

    }
}
void Game::determineWinner(User_Player player1, User_Player player2) {
    comparingScores();
    if (player1== player2){
        cout << "\n\n\n\n";
        cout << " \n\n 🤔🤔🤔 It's a draw 🤔🤔🤔 \n\n" << endl;
        cout << "\n\n\n\n";
}
    else if (player1>player2) {
        cout << "\n\n\n\n";
        cout << "\n\n🥳🥳🥳 Player 1 wins! 🥳🥳🥳\n\n" << endl;
        cout << "\n\n\n\n";

    } else {

        cout << "\n\n\n\n";
        cout << "\n\n 😋😋😋 Player 2 wins! 😋😋😋\n\n" << endl;
        cout << "\n\n\n\n";
    }
}
