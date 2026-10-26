//
// Created by terra on 25/10/2026.
//

#ifndef ROCKPAPERSCISSORS_PLAYERCHOICE_H
#define ROCKPAPERSCISSORS_PLAYERCHOICE_H
using namespace std;
#include <iostream>

#include "RPCchoice.h"

class playerChoice {

public: playerChoice(){
        int choice;
    }

    int numberOfPlayers() {
        int playerNo;
        cout<<"How many players are there? 1 or 2?\n";
        cin>>playerNo;
        if (playerNo >2 || playerNo <1) {
            cout<<"Please enter 1 or 2\n";
            playerNo = numberOfPlayers();
        }
        return playerNo;
    }


    RPCChoice playerInput(int playerNo) {
        int numChoice;
        RPCChoice choice = {};
        cout << "Choose Rock, Paper or Scissors: \n 1: Rock \n 2: Paper \n 3: Scissors" << endl;
        cin >> numChoice;
        if (numChoice == 1) {
            choice = ROCK;
        } else if (numChoice == 2) {
            choice = PAPER;
        } else if (numChoice == 3) {
            choice = SCISSORS;
        } else {
            cout << "Please pick a valid number"<<endl;
            playerInput(playerNo);
        }
        return choice;
    }


};


#endif //ROCKPAPERSCISSORS_PLAYERCHOICE_H
