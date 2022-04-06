// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 164440 Ray Mitchell
// 04/04/2022
// C2A1E7_Employee.h
// Win10
// g++ 11.2.0
// 
// A header file that contains the Employee class
//

#include <iostream>
using namespace std;
#ifndef C2A1E7_EMPLOYEE_H
#define C2A1E7_EMPLOYEE_H
class Employee 
{
    private:
        char *name;
        int age;
        float raise;
        double salary;
    public:
        void Set(const char *charIn);
        void Set(int ageIn = 25){age = ageIn;};
        void Set(const float &raiseIn){raise = raiseIn;};
        void Set(const double *salaryIn)
        {
            salary = *salaryIn;
        };
        char *Get(char **saveName){*saveName = name; return *saveName;};
        int Get(int &saveAge){saveAge = age; return saveAge;};
        float &Get(float &saveRaise){saveRaise = raise; return saveRaise;};
        inline double Get(double *salaryIn);
};
  
inline double Employee::Get(double *salaryIn)
{
    salary = *salaryIn;
    return salary;
}

#endif
