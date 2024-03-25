#include "rps.h"
#include <iostream>


void setup(Game rps) {
    cout << "Welcome to Rock Paper Scissors!" << endl;
    cout << "How many rounds would you like to play: ";
    int round;
    cin >> round;
    rps.setRound(round);
}

void playGame(Game rps){

}