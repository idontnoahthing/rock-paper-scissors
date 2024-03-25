#ifndef RPS_H
#define RPS_H
using namespace std;

class Game {
    public:
        int roundsPlayed = 0;
        int maxRound = 0;

        //getters
        int getRound(){}
        int getMaxRound(){}
        //setters
        void setRound(int round){}
        void setMaxRound(int mxRound){}
};

class Player {
    private:
        int wins;
        int choice;
    public:
        //getters
        int getWins(){}
        int getChoice(){}
        //setters
        void setWins(){}
        void setChoice(){}
};


void setup(){}

void startGame(){}

int detWinner(){}

void menu(){}


#endif // RPS_H