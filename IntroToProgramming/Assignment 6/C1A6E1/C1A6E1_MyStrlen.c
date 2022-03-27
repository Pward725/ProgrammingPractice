// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/14/2022
// C1A6E1_MyStrlen.c
// Win10
// g++ 11.2.0
// 
// A file containing the function to compute an input string length
//
#include <stddef.h>
size_t MyStrlen(const char *s1)
{
    //store the starting val of the input pointer
    const char * const START = s1;
    //increment the pointer until we find the null terminator
    while (*s1 != '\0')
    {
        s1++;
    }
    return (size_t)(s1 - START);//return the length of the string
}
