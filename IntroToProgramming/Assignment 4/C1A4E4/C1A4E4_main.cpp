// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/06/2022
// C1A4E4_main.cpp
// Win10
// g++ 11.2.0
// 
// This program prints a specified character in a variety of ways
//

#include <iostream>
using namespace std;

#include "C1A4E4_MaxOf.h"


int main() {
    long double input1, input2, input3;
    cout << "Input three decimal numbers separated by spaces: ";
    cin >> input1 >> input2 >> input3;
    //Call the functions and print the results
    cout << "mMaxOf3(" << input1 << ", " << input2 << ", " << input3 << ") "
         << "returned " <<  mMaxOf3(input1, input2, input3) << "\n";
    cout << "fMaxOf3(" << input1 << ", " << input2 << ", " << input3 << ") "
         << "returned " <<  fMaxOf3(input1, input2, input3) << "\n";
}
