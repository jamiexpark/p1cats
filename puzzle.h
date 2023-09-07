#ifndef PUZZLE_H
#define PUZZLE_H

#include <vector>
#include <string>
using namespace std; 


    struct State {
      char color;
      int row; 
      int col;
      
    };

//check if the element is not a wall or something you can step on/discover
bool isValid(const vector<vector<char>>& puzzleMap, int row, int col);

//solution? 
void solvePuzzle(int numColors, int numRows, int numCols, const vector<vector<char>>& puzzleMap);

int getRow(const vector<vector<char> >& puzzleMap, int row, int col);

pair<int, int> findTheAt(const vector<vector<char> >& puzzleMap, int row, int col);

#endif // PUZZLE_H
