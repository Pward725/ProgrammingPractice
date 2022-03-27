// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/06/2022
// C1A4E2_PrintLines-3.cpp
// Win10
// g++ 11.2.0
// 
// Contains a function to print a character a number of times on a number of lines
//
#include <iostream>

using namespace std;

void PrintLines(int a, int b, int c) {
    for (int numLines = 0; numLines < c; numLines++)
    {
        for(int numChars = 0; numChars < b; numChars++)
        {
            cout << char(a);
        }
        cout << "\n";
    }  
}
