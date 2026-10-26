//
// Created by terra on 26/10/2026.
//

#ifndef ROCKPAPERSCISSORS_GAME_H
#define ROCKPAPERSCISSORS_GAME_H
#include <cstdlib>
#include "playerChoice.h"
#include "RPCChoice.h"
using namespace std;


class game {
    public:game() {
        int rng;
    }

    int cpuChoice() {
        // Rand doesn't seem to actually be random???
        int rng = rand()%101;
        cout << rng << endl;
    };
};


#endif //ROCKPAPERSCISSORS_GAME_H
