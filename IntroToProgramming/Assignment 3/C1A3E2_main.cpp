// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 01/30/2022
// C1A3E2_main.cpp
// Win10
// g++ 11.2.0
// 
// A program that prints the reverse of a hex value

#include <iostream>
using namespace std;

int main() {
    int inValue;
    int LSD;

    cout << "Enter any hexadecimal integer value: ";
    cin >> hex >> inValue;
    bool isNeg = inValue < 0;
    if ( isNeg){inValue = inValue * -1;}
    cout << "\""; 
    if (isNeg){cout << "-";}
    cout << hex << inValue << "\" in reverse is \"";
    
    do//iterate through LSD's until none are left
    {
        LSD = inValue % 16;
        inValue = inValue/16;
        cout << LSD;
    } while (inValue > 0);
    
    if (isNeg)
    {
        cout << "-";
    }
    cout << "\"";
}
