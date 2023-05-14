//
//  main.cpp
//  CS32 Project 1
//
//  Created by Arash Dewan on 4/12/23.
//
// rabbits.cpp

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
#include <cctype>
using namespace std;

#include "globals.h"
#include "Rabbit.h"
#include "Player.h"
#include "Arena.h"
#include "Game.h"


int main()
{
      // Create a game
      // Use this instead to create a mini-game:   Game g(3, 5, 2);
    Game g(10, 12, 40);

      // Play the game
    g.play();
}


