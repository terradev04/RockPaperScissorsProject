#include <iostream>
#include "game.h"
using namespace std;
// Main function, creates a class of type game called Game and then runs the primary game loop
int main() {
    game Game {};
    Game.gameLoop();
    return 0;

}