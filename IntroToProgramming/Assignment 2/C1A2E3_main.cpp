// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 01/23/2022
// C1A2E3_main.cpp
// Win10
// g++ 11.2.0
// 
// A simple C++ program that outputs a triangle of characters.

#include <iostream>
using namespace std;

int main() {
    const char LEADER_CHAR = '^';
    const char DIAGONAL_CHAR = '$';
    cout << "Enter any positive decimal integer: ";
    int inputAsInt;
    cin >> inputAsInt;

    //Number of lines will be equal to the input number
    for (int lineNum = inputAsInt; lineNum > 0; lineNum--) 
    {
        //number of leading characters will start at the input number and get succesively smaller
        for (int spaceNum = 1; spaceNum < lineNum; spaceNum++) 
        {
            cout << LEADER_CHAR; 
        }
        cout << DIAGONAL_CHAR << "\n";
    }
    return(0);
}