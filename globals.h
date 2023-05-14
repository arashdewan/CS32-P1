//
//  globals.h
//  CS32 Project 1
//
//  Created by Arash Dewan on 4/12/23.
//

#ifndef globals_h
#define globals_h
class Arena;
///////////////////////////////////////////////////////////////////////////
// Manifest constants
///////////////////////////////////////////////////////////////////////////

const int MAXROWS = 20;               // max number of rows in the arena
const int MAXCOLS = 25;               // max number of columns in the arena
const int MAXRABBITS = 100;           // max number of rabbits allowed
const int INITIAL_RABBIT_HEALTH = 2;  // initial rabbit health
const int POISONED_IDLE_TIME = 1;     // poisoned rabbit idles this many turns
                                      //   between moves

const int NORTH = 0;
const int EAST  = 1;
const int SOUTH = 2;
const int WEST  = 3;
const int NUMDIRS = 4;

const int EMPTY      = 0;
const int HAS_POISON = 1;

///////////////////////////////////////////////////////////////////////////
//  Auxiliary function declarations
///////////////////////////////////////////////////////////////////////////

int randInt(int lowest, int highest);
bool attemptMove(const Arena& a, int dir, int& r, int& c);
void clearScreen();
#endif /* globals_h */
