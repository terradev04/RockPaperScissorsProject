#include <iostream>

#include "playerChoice.h"
#include "RPCChoice.h"
#include "game.h"
using namespace std;
int main() {
    /*playerChoice PlayerChoice{};
    int playerCount = PlayerChoice.numberOfPlayers();
    RPCChoice choice = PlayerChoice.playerInput(playerCount);
    cout << choice << endl;
    return 0;*/
    game Game {};
    Game.cpuChoice();
    return 0;

}