// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 164440 Ray Mitchell
// 04/02/2022
// C2A1E4_StrToUpper.c
// Win10
// g++ 11.2.0
// 
// A function that converts a string to all uppercase
//
#include <ctype.h>

size_t StrToUpper(char *stringAddress, const char *copyString)
{
    //initialize the location for copied string to the null character
    *stringAddress = '\0';
    //remember where the start of the copy string was
    const char *copy = copyString;
    //while there are still characters in the copy string
    while (*copyString != '\0')
    {
        *stringAddress = (char)toupper(*copyString);
        copyString++;
        stringAddress++;
    }
    //return the length of the string
    return copyString - copy;
}
