//
// Created by terra on 25/10/2026.
//

#ifndef ROCKPAPERSCISSORS_PLAYERCHOICE_H
#define ROCKPAPERSCISSORS_PLAYERCHOICE_H
using namespace std;
#include <iostream>

#include "RPCchoice.h"

class playerChoice {
    playerChoice() = default;

    int numberOfPlayers() {
        int playerNo;
        cout<<"How many players are there? 1 or 2? ";
        cin>>playerNo;
        return playerNo;    

    }

    int playerInput(int playerNo) {
        int choice;
        cout << "Choose Rock, Paper or Scissors: \n 1: Rock \n 2: Paper \n 3: Scissors" << endl;
        cin >> choice;
        return choice;
    }


};


#endif //ROCKPAPERSCISSORS_PLAYERCHOICE_H
