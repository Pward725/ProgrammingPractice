// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 01/15/2022
// C1A1E1_main.cpp
// Win10
// g++ 11.2.0
// 
// A C++ program which takes in an int and
// prints its value in decimal, octal and hex
//

#include <iostream>
using namespace std;

int main() {
    int inputAsInt;

    cout << "Enter any decimal integer numeric value: ";
    cin >> inputAsInt;
    cout << inputAsInt << " decimal = " << 
        oct << inputAsInt << " octal = " <<
        hex << inputAsInt << " hexadecimal\n";
    return(0);
}
