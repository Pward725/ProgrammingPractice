// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 164440 Ray Mitchell
// 04/01/2022
// C2A1E3_FindFirstInt.c
// Win10
// g++ 11.2.0
// 
// A program that finds the first instance of an int in an array 
//

#include <stdio.h>
int *FindFirstInt(const int *ptr, size_t count, int value)
{
    //Loop through the elements of the array
    for (int ind = 0; ind < (int)count; ind++) 
    {
        //check if it's the one we want
        if (ptr[ind] == value)
        {
            return (int *)(ptr + ind);
        }
    }
    //return null if we don't find anything
    return NULL;
}
