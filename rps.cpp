#include "rps.h"
#include <iostream>

//getters
int Game::getRound(){return roundsPlayed;}
int Game::getMaxRound(){return maxRound;}
int Player::getChoice(){return choice;}
int Player::getWins(){return wins;}

//setters
void Game::setRound(){}


void setup(Game rps) {
    cout << "Welcome to Rock Paper Scissors!" << endl;
    cout << "How many rounds would you like to play: ";
    
    rps.setRound();
}