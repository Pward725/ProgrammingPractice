// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 03/02/2022
// C1A8E1_main.cpp
// Win10
// g++ 11.2.0
// 
// This file contains a program to input and display bank account attributes
//

#include <iostream>
#include "C1A8E1_SavingsAccount.h"
using namespace std;
int main()
{
    SavingsAccount testAccount;
    //Initialize the savings account
    testAccount.GetInitialValues();
    //Display the bank account values
    testAccount.DisplayValues();
    //calculate the penalty
    double returnVal = testAccount.CalculatePenalty();
    //display the calculated penalty
    cout << "Account closure penalty: " << returnVal << "\n";
    return(0);
}
