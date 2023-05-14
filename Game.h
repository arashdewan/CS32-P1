//
//  Game.hpp
//  CS32 Project 1
//
//  Created by Arash Dewan on 4/12/23.
//

#ifndef Game_hpp
#define Game_hpp
#include <string>
using namespace std;
class Arena;

class Game
{
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nRabbits);
    ~Game();

      // Mutators
    void play();

  private:
    Arena* m_arena;

      // Helper functions
    string takePlayerTurn();
};

bool decodeDirection(char ch, int& dir);
bool recommendMove(const Arena& a, int r, int c, int& bestDir);
int computeDanger(const Arena& a, int r, int c);
#endif /* Game_hpp */
