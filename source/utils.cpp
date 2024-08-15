//
// Created by krishom on 8/15/24.
//
#include "../include/utils.hpp"
#include "../include/Game.hpp"
using namespace std;

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
    cout.flush(); // Ensure "Comparing scores" is printed immediately

    for (int i = 0; i < 10; ++i) { // Print 10 dots
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

void writeScores(const string& player1, const int& score1, const string& player2,const int& score2) {
    fstream file;
    file.open("../score_history.txt", ios::app | ios::out); //append and write mode
    if (!file.is_open()) {
        cerr << "Error: Unable to open file for writing score" << endl;
    } else { //is_open is a function that checks if the file is open
        time_t now = time(nullptr);
        file << ctime(&now) << player1 << " : " << score1 << " " << player2 << " : " << score2 << endl;
        file.close();
    }
}