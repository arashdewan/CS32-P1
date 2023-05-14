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
    Arena a(1, 4);
    a.addPlayer(1, 4);
    a.addRabbit(1, 1);
    a.setCellStatus(1, 2, HAS_POISON);
    while (a.getCellStatus(1, 2) == HAS_POISON)
          a.moveRabbits();
    a.moveRabbits();
    a.history().display();
    cout << "====" << endl;
      
    return 0;
}


