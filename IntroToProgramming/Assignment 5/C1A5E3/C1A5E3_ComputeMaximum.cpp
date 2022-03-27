// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/12/2022
// C1A5E3_ComputeMaximum.cpp
// Win10
// g++ 11.2.0
// 
// Contains a function to return a pointer to the maximum between two values
//

double *ComputeMaximum(const double *num1, const double *num2) {
    return (double *)((*num1 > *num2) ? num1 : num2);
}