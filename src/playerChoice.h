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
    // A function to determine how many people are playing the game.
    // Asks for one input and returns an int
        int playerNo;
        cout<<"How many players are there? 1 or 2?\n";
        cin>>playerNo;
        if (playerNo >2 || playerNo <1) {
            //Repeats if invalid input
            cout<<"Please enter 1 or 2\n";
            playerNo = numberOfPlayers();
        }
        return playerNo;
    }


    RPCChoice playerInput() {
    // A function that asks the player whether they want to play Rock, Paper or Scissors
    // Takes one input and returns an ENUM of type RPCChoice
        int numChoice;
        RPCChoice choice = {};
        cout << "Choose Rock, Paper or Scissors: \n 1: Rock \n 2: Paper \n 3: Scissors" << endl;
        //Asks for input here
        cin >> numChoice;
        // Turns the int into an enum here. Perhaps I should have simply done this in game.h instead.
        if (numChoice == 1) {
            choice = ROCK;
        } else if (numChoice == 2) {
            choice = PAPER;
        } else if (numChoice == 3) {
            choice = SCISSORS;
        //Repeats if invalid input. Does not handle nothing being put in, just waits for an answer
        } else {
            cout << "Please pick a valid number"<<endl;
            playerInput();
        }
        return choice;
    }


};


#endif //ROCKPAPERSCISSORS_PLAYERCHOICE_H
