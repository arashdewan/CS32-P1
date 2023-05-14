//
//  History.cpp
//  CS32 Project 1
//
//  Created by Arash Dewan on 4/12/23.
//

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
#include <cctype>
#include "History.h"
#include "globals.h"

using namespace std;

History::History(int nRows, int nCols) : m_rows(nRows), m_cols(nCols)
{
    for (int r = 0; r < nRows; r++)
        for (int c = 0; c < nCols; c++)
            m_grid[r][c] = 0;
}

bool History::record(int r, int c)
{
    if (r< 1 || r > m_rows || c < 1 || c > m_cols)
        return false;
    m_grid[r-1][c-1]++;
    return true;
}

void History::display() const
{
    clearScreen();
    for (int r = 0; r < m_rows; r++)
    {
        for (int c = 0; c < m_cols; c++)
        {
            if (m_grid[r][c]==0)
                cout << ".";
            else if (m_grid[r][c] >= 26)
                cout << "Z";
            else
                cout << static_cast<char>('A' + m_grid[r][c] - 1);
        }
        cout << endl;
    }
    cout << endl;
}
