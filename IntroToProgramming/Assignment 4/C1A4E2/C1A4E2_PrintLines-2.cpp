// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/06/2022
// C1A4E2_PrintLines-2.cpp
// Win10
// g++ 11.2.0
// 
// Contains a function to print a character a number of times on one line
//
#include <iostream>

using namespace std;

void PrintLines(int a, int b) {
    for(int numChars = 0; numChars < b; numChars++)
    {
        cout << char(a);
    } 
    cout << "\n";
}
