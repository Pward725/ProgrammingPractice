// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 03/03/2022
// C1A8E1_SavingsAccount.h
// Win10
// g++ 11.2.0
// 
// Header file for class and function declarations
//
#ifndef C1A8E1_SAVINGSACCOUNT_H
#define C1A8E1_SAVINGSACCOUNT_H
#include <iostream>
const double ONE_HUNDRETH = 0.01;
//class declaration
class SavingsAccount
{
private:
    int type;
    std::string ownerName;
    long IDnbr;
    double balance, closurePenaltyPercent;
public:
    void GetInitialValues(void);
    inline void DisplayValues();
    double CalculatePenalty()
    {
        return(closurePenaltyPercent * balance * ONE_HUNDRETH);
    }
};

inline void SavingsAccount::DisplayValues()
{
    //input SavingsAccount values
    std::cout << "\nAccount type: " << type << "\n";
    std::cout << "Owner name: " << ownerName << "\n";
    std::cout << "ID number: " << IDnbr << "\n";
    std::cout << "Account balance: " << balance << "\n";
    std::cout << "Account closure penalty percent: " 
              << closurePenaltyPercent << "\n";
}

#endif
