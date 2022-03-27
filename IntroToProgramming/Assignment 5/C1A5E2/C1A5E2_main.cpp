// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/08/2022
// C1A5E2_main.cpp
// Win10
// g++ 11.2.0
// 
// A program that returns the max and min between two values
//

#include <iostream>
using namespace std;

#include "C1A5E2_ComputeMinMax.h"

int main() {
    //Declare variables
    double val1, val2;
    //Get input
    cout << "Input two decimal numbers separated by a space: ";
    cin >> val1 >> val2;
    //Compute and Output
    cout << "ComputeMinimum(" << val1 << ", " << val2 << ") returned " 
         << ComputeMinimum(val1, val2) << "\n";
    cout << "ComputeMaximum(" << val1 << ", " << val2 << ") returned " 
         << ComputeMaximum(val1, val2) << "\n";
    return(0);
}
