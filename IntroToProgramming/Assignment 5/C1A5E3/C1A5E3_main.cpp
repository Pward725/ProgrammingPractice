// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/12/2022
// C1A5E3_main.cpp
// Win10
// g++ 11.2.0
// 
// Finds the max and min between two input values
//

#include <iostream>
using namespace std;

#include "C1A5E3_ComputeMinMax.h"

int main() {
    double num1, num2;
    //Get input
    cout << "Input two decimal numbers separated by a space: ";
    cin >> num1 >> num2;
    //Print out results
    cout << "ComputeMinimum(&" << num1 << ", &" << num2 << ") returned &" 
         << *ComputeMinimum(&num1, &num2) << "\n";
    cout << "ComputeMaximum(&" << num1 << ", &" << num2 << ") returned &" 
         << *ComputeMaximum(&num1, &num2) << "\n";
    return(0);
}
