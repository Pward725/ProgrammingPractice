// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 01/23/2022
// C1A2E1_main.cpp
// Win10
// g++ 11.2.0
// 
// A C++ program which takes in a char and outputs its lowercase equivalent
//
// 1. Because ASCII characters are really just numeric values in a lookup table, an input of a non
// capital letter will just be the ASCII character that corresponds to its own numeric value minus 32
// 2.  It will always print the equivalent as @ because cin.get() only gets the first character and
// the lowercase equivalent of a whitspace is the @ sign.

#include <iostream>
using namespace std;

int main() {
    int upperToLowerDiff = 'a' - 'A';

    cout << "Enter any character: ";
    char inputAsChar; 
    cin.get(inputAsChar);
    char lowercaseEquivalent = inputAsChar + upperToLowerDiff;
    cout << "The lowercase equivalent of '" << inputAsChar << "' is '" << lowercaseEquivalent << "'\n";
    return(0);
}
