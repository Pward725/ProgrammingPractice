// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 164440 Ray Mitchell
// 04/03/2022
// C2A1E7_Employee.cpp
// Win10
// g++ 11.2.0
// 
// Contains a function that dynamically allocates 
// the exact amount of memory required to hold a name
//
#include "C2A1E7_Employee.h"
#include <cstdlib>
#include <cstring>
using namespace std;
void Employee::Set(const char *salaryIn)
{
    //malloc the memory
    char *nameAddress = (char *)malloc(strlen(salaryIn));
    name = nameAddress;
    cout << *name;
    *name = *salaryIn;
}