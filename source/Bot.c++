#include <iostream>
#include <csignal>

using namespace std;
#include "../include/header/Bot.hpp"


void Bot::setChoice()
{
    cout << "Bot is choosing..." << endl;
    sleep(1);
    int n = rand() % 100; // generates random value from 0 to 100
    if (n >= 0 && n < 40)
    {
        cout << "Bot chose rock🪨 " << endl;
        setState(ROCK);
    }
    else if (n > 40 && n < 60)
    {
        cout << "Bot chose paper🧻 " << endl;
        setState(PAPER);
    }
    else
    {
        cout << "Bot chose scissor✂️ " << endl;
        setState(SCISSOR);
    }
}

Bot::Bot() = default;
Bot :: ~Bot()= default;

