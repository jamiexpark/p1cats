// project identifier: A8A3A33EF075ACEF9B08F5B9845569ECCB423725

#include <iostream>
#include <vector>
#include <string>
#include <unistd.h> // Include for getopt

#include "puzzle.h"
using namespace std;

int main(int argc, char *argv[])
{
    int opt;
    bool useStack = false;
    bool useQueue = false;
    bool useDeque = false;
    bool outputList = false;

    while ((opt = getopt(argc, argv, "sqdo:")) != -1)
    {
        switch (opt)
        {
        case 's':
            useStack = true;
            break;
        case 'q':
            useQueue = true;
            break;
        case 'd':
            useDeque = true;
            break;
        case 'o':
            if (std::string(optarg) == "list")
            {
                outputList = true;
            }
            else
            {
                std::cerr << "Invalid option: " << optarg << std::endl;
                return 1;
            }
            break;
        default:
            std::cerr << "Usage: " << argv[0] << " [-s] [-q] [-d] [-o list]" << std::endl;
            return 1;
        }
    }

    int numColors;
    int numRows;
    int numColumns;

    if (!(cin >> numColors >> numRows >> numColumns))
    {
        cerr << "first line error" << endl;
        return 1;
    }

    string line;
    vector<vector<char>> puzzleMap;

    while (std::getline(cin, line))
    {

        vector<char> row;

        for (char &c : line)
        {
            row.push_back(c);
        }
        puzzleMap.push_back(row);
    }

    for (vector<char> &row : puzzleMap)
    {
        for (char &c : row)
        {
            cout << c;
        }

        cout << '\n';
    }

    cout << "testing output" << endl;
    cout << "Num colors: " << numColors << endl;
    cout << "rows: " << numRows << endl;
    cout << "column: " << numColumns << endl;
    cout << puzzleMap[1][1];
    cout << puzzleMap[2][1];
    cout << puzzleMap[5][5];
    cout << puzzleMap[6][6];

    // solvePuzzle(numColors, numRows, numColumns, puzzleMap);
    if (isValid(puzzleMap, 5, 5) == true)
    {
        cout << "isValid: true" << endl;
    }
    else
    {
        cout << "isValid: false" << endl;
    }

    findTheAt(puzzleMap, numRows, numColumns);
    cout << '\n';
    getRow(puzzleMap, numRows, numColumns);
    cout << '\n';
    // cout << "hello" << endl;
    return 0;
}
