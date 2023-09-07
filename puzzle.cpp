//project identifier: A8A3A33EF075ACEF9B08F5B9845569ECCB423725

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Mappy{
    struct State {
      char color;
      int row; 
      int col; 

    //create staart state
    State createStartState(pair<int, int> coord, char color, int row, int col){
            State kitty; 
            kitty.color = color; 
            kitty.row = coord.first; 
            kitty.col = coord.second; 
            return kitty; 
        }
    };

    // bool isValid(const vector<vector<char> >&puzzleMap, int row, int col);
};


bool isValidSpace(const vector<vector<char> >& puzzleMap, int row, int col) {
    int numRows = row;
    cout << puzzleMap.size() << endl; 
    int numCols = col;
    if(row >= 0 && row < numRows && col >= 0 && col < numCols && puzzleMap[row][col] != '#'){
        return true; 
    };
}

int getRow(const vector<vector<char> >& puzzleMap, int row, int col){
    cout << "getRow: " << row; 
    return row;
}


pair<int, int> findTheAt(const vector<vector<char> >& puzzleMap, int row, int col){
    pair<int, int> atCoord;
    row = -1; 
    col = -1; 

    for(int row = 0; row < puzzleMap.size(); ++row){
        for(int col = 0; col < puzzleMap[row].size(); ++col){
            if(puzzleMap[row][col] == '@'){
                atCoord.first = row; 
                atCoord.second = col;  
            }
        }
    }
    cout << "@-Coord: " << atCoord.first << "," << atCoord.second << endl; 
    return atCoord; 

}
void solvePuzzle(int numColors, int numRows, int numCols, const vector<vector<char>>& puzzleMap) {

    int startRow = -1, startCol = -1;

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (puzzleMap[i][j] == '@') {
                startRow = i;
                startCol = j;
                break;
            }
        }
        if (startRow != -1) {
            break;
        }
    }
    // declare q
    // queue<State> q;


    // State startState = {'^', 0, 0};
    // q.push(startState);

    // //testing purposes:
    // cout << "hai" << endl; 

    //find the @ in the map

    //make the @ the start state and its coordinates into a struct 
    //ex. {@, 7, 18 }

// State createStartState(pair<int, int> coord, char color, int row, int col){
//     State kitty; 
//     kitty.color = color; 
//     kitty.row = coord.first; 
//     kitty.col = coord.second; 
//     return kitty; 
// }

    //look north, west, east, south of the start state
    //ex. {^, 6, 18} (south), {^, 7, 19}(east)} , etc. 

    //add all of the north, west, east, south coordinates into the queue if...
    //the element on coordinate it is not a wall (!= #) or an uppercase char that isnt the current color. 
    //ex. if it is an uppercase A and we are on the color ^, it is a wall. 

    //if valid, we look into that and look north west east etc again and update the start state. 

    //continue until the ? symbol. 


   
}


    



