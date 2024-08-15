#include <iostream>
#include <iomanip>
#include "../include/User_Player.hpp"

using namespace std;

void User_Player::setChoice() {
    int ch;
    bool valid = false;
     static int i = 0;
       if (i == 1)
        ++i;
    else
        i = 1;

    while (!valid) {
        cout << "Enter your choice player" << i << ": \n" << endl;
        cin >> setw(1) >> ch;

        switch (ch) {
            case 1:
                cout << "You chose rock🪨 " << endl;
                valid = true;
                break;
            case 2:
                cout << "You chose paper🧻 " << endl;
                valid = true;
                break;
            case 3:
                cout << "You chose scissor✂️ " << endl;
                valid = true;
                break;
            default:
                cout << "Error :⚠️⚠️⚠️ Input Stream error ⚠️⚠️⚠️" << endl;
                cout << "Please re-enter your choice correctly !" << endl;
                break;
        }
    }

    setState(ch);

 

}

void User_Player::roundWinner(int result, int i,User_Player& p1,User_Player& p2) {
    if (result == 0)
    {
        cout << "\n\n\n\n";
        cout << " 😅 Round " << i + 1 << ": is Draw!" << endl;
        cout << "\n\n\n\n";
    }
    else if (result == 1) {
        cout << "\n\n\n\n";
        ++p1;
        cout<< "🤩 Round " << i + 1 << ": Player 1 wins!" << endl;
        cout << "\n\n\n\n";
    } else {
        cout << "\n\n\n\n";
        ++p2;
        cout << "🥲 Round " << i + 1 << ": Player 2 wins!" << endl;
        cout << "\n\n\n\n";
    }
}


User_Player::User_Player() = default;

User_Player::~User_Player() = default;
