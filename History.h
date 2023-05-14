//
//  History.hpp
//  CS32 Project 1
//
//  Created by Arash Dewan on 4/12/23.
//

#ifndef History_hpp
#define History_hpp
#include "globals.h"
class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int m_rows;
    int m_cols;
    int m_grid[MAXROWS][MAXCOLS];
};
#endif /* History_hpp */
