//
// Created by terra on 26/10/2026.
//

#ifndef ROCKPAPERSCISSORS_GAME_H
#define ROCKPAPERSCISSORS_GAME_H
#include <cstdlib>
#include <random>
#include "playerChoice.h"
#include "RPCChoice.h"
using namespace std;


class game {
    public:game() {
        int rng;
    }

    int cpuChoice() {
        // Function to generate a random number based on time. Returns an int
        srand(time(nullptr));
        int rng = rand()%3+1;
        // Will never be below 1 or above 3
        return rng;
    };

    RPCChoice intToEnum(int num) {
        // Funtion to take an int as an input and converts it to an ENUM of type RPCChoice.

        switch (num) {
            case 1:
                return ROCK;
                break;
            case 2:
                return PAPER;
                break;
            case 3:
                return SCISSORS;
                break;
            default:
                // Should never occur
                cout<<"Invalid Integer Input"<<endl;
                break;
        }
    }

    void RockPaperScissors(RPCChoice playerRPC1, RPCChoice playerRPC2, int playerNo) {
        // A messy function that checks each player's input against the other and determines the winner.
        // Takes two ENUMs of RPCChoice and an int as inputs
        if (playerRPC1 == ROCK) {
            // If statement for when the first player inputted a ROCK
            if (playerRPC2 == PAPER) {
                if (playerNo == 1) {
                    cout << "Computer Wins!" << endl;
                } else {
                    cout << "Player Two Wins!" << endl;
                }
            } else if (playerRPC2 == SCISSORS) {
                cout << "Player One Wins!" << endl;
            } else {
                cout << "Draw!" << endl;
            }
        } else if (playerRPC1 == PAPER) {
            // Elif statement for when the first player inputted PAPER
            if (playerRPC2 == SCISSORS) {
                if (playerNo == 1) {
                    cout << "Computer Wins!" << endl;
                } else {
                    cout << "Player Two Wins!" << endl;
                }
            } else if (playerRPC2 == ROCK) {
                cout << "Player One Wins!" << endl;
            } else {
                cout << "Draw!" << endl;
            }
        } else if (playerRPC1 == SCISSORS) {
            // Elif statement for when the first player inputted SCISSORS
            if (playerRPC2 == ROCK) {
                if (playerNo == 1) {
                    cout << "Computer Wins!" << endl;
                } else {
                    cout << "Player Two Wins!" << endl;
                }
            } else if (playerRPC2 == PAPER) {
                cout << "Player One Wins!" << endl;
            } else {
                cout << "Draw!" << endl;
            }
        }
    }

    void gameLoop() {
        // Primary loop. Has no direct inputs or outputs.
        bool continueRunning = true;
        playerChoice PlayerChoice{};
        while (continueRunning) {
            // Main While Loop, will always run at least ones
            int playerNo = PlayerChoice.numberOfPlayers();
            if (playerNo == 1) {
                RPCChoice playerRPC = PlayerChoice.playerInput();
                // Takes the player's input
                int rng = cpuChoice();
                // Gets a randomly generated value
                RPCChoice computerRPC = intToEnum(rng);
                // Turns randomly generated value into an ENUM
                RockPaperScissors(playerRPC, computerRPC, playerNo);
                // Checks whether the player or computer won
            } else {
                RPCChoice playerRPC = PlayerChoice.playerInput();
                RPCChoice playerRPC2 = PlayerChoice.playerInput();
                // Takes both player's inputs
                RockPaperScissors(playerRPC, playerRPC2, playerNo);
                // Checks which player won
            }
            cout << "Play again? 1:Yes 2:No" << endl;
            // Asks the player whether to continue the loop.  Does nothing if the answer is 1
            int continueInput;
            cin >> continueInput;
            if (continueInput == 2) {
                // Sets continueRunning to false if the answer is 2. Ending the While Loop
                continueRunning = false;
            }

        }
        cout<<"Goodbye!"<<endl;
    }
};


#endif //ROCKPAPERSCISSORS_GAME_H
