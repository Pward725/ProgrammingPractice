// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 164440 Ray Mitchell
// 04/01/2022
// C2A1E2_main.c
// Win10
// g++ 11.2.0
// 
// A 
//

#include <stdio.h>
int * FindFirstInt(const int *ptr, size_t count, int value)
{
    for (int ind = 0; ind < count; ind++)
    {
        if (ptr[ind] == value)
        {
            return ptr[ind];
        }
    }
    return NULL;
}
