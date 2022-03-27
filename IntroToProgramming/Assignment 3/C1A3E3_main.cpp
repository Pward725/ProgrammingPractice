// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 01/30/2022
// C1A3E3_main.cpp
// Win10
// g++ 11.2.0
// 
// A program that prints the word equivalent of an octal value

#include <iostream>
using namespace std;

int main() {
    int inValue;

    //get input and print first part of formatted text
    cout << "Enter any octal integer value: ";
    cin >> oct >> inValue;
    bool isNeg = inValue < 0;
    if ( isNeg){inValue = inValue * -1;}
    cout << "\""; 
    if (isNeg){cout << "-";}
    cout << oct << inValue << "\" in words is \"";
    
    int dividend = inValue;
    int divisor;
    for(divisor = 1; dividend > 7; divisor++)
    {
        divisor = divisor*8;
        dividend = dividend/8;
    }
    //don't forget the minus sign
    if(isNeg){cout << "minus ";}
    dividend = inValue;
    do//find the word equivalent of each MSD
    {
        int MSD = dividend/divisor;
        cout << dividend << "/" << divisor;
        switch (MSD)
        {
        case 0:
            cout << "zero";
            break;
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        default:
            cout << "MSD was not 0-7";
            break;
        }
        cout << " ";
        dividend = dividend - (MSD*divisor);
        divisor = divisor/8;
    } while (divisor != 0);
    cout << "\""; 

    
}
