// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 03/02/2022
// C1A8E1_SavingsAccount.cpp
// Win10
// g++ 11.2.0
// 
// This file contains a function to initialize a bank account
//

#include <iostream>
#include <string>
#include "C1A8E1_SavingsAccount.h"
using namespace std;
void SavingsAccount::GetInitialValues()
{
    //get type
    cout << "input type: ";
    cin >> type;
    //get owner name
    cout << "input owner name: ";
    cin >> ws;
    getline(cin, ownerName);
    //get ID number
    cout << "input ID number: ";
    cin >> IDnbr;
    //get balance
    cout << "input balance: ";
    cin >> balance;
    //get closer penalty
    cout << "input penalty percent: ";
    cin >> closurePenaltyPercent;
}