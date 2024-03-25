#ifndef RPS_H
#define RPS_H
using namespace std;

class Game {
    public:
        int roundsPlayed = 0;
        int maxRound = 0;

        //getters
        int getRound(){return roundsPlayed;}
        int getMaxRound(){return maxRound;}
        //setters
        void setRound(int round){}
        void setMaxRound(int mxRound){}   
};

class Player {
    private:
        int wins = 0;
        int choice;
    public:
        //getters
        int getChoice(){return choice;}
        int getWins(){return wins;}
        //setters
        void addWin(){wins++;}
        void setChoice(){}
};

class Computer {
    private:
        int 
}


void setup(){}

void startGame(){}

int detWinner(){}

void menu(){}


#endif // RPS_H