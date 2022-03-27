// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/06/2022
// C1A4E4_MaxOf.h
// Win10
// g++ 11.2.0
// 
// Header file function and macro definitions
//
#ifndef C1A4E4_MAXOF
#define C1A4E4_MAXOF
#define mMaxOf2(num1, num2) ((num1) > (num2) ? (num1) : (num2))
#define mMaxOf3(num1, num2, num3) mMaxOf2(mMaxOf2(num1, num2), num3)
inline long double fMaxOf2(long double num1, long double num2){return (num1 > num2 ? num1 : num2);};
inline long double fMaxOf3(long double num1, long double num2, long double num3){
    return(fMaxOf2(fMaxOf2(num1, num2), num3));};
#endif