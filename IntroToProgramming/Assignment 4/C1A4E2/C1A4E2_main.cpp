// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/06/2022
// C1A4E2_main.c
// Win10
// g++ 11.2.0
// 
// This program prints a specified character in a variety of ways
//

#include <iostream>
using namespace std;

#include "C1A4E2_PrintLines.hpp"


int main() {
    int numIters = 2;
    for (int i = 0; i < numIters; i++)
    {
        //Get input
        char input1;
        int input2, input3;
        cout << "Input a character and two integers separated by spaces: ";
        cin >> input1 >> input2 >> input3;
        //Call the functions
        PrintLines(int(input1), input2, input3);
        PrintLines(int(input1), input2);
        PrintLines(int(input1));
        PrintLines();
    }
}
