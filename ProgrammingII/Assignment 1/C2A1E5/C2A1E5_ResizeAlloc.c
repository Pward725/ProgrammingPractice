// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 164440 Ray Mitchell
// 04/03/2022
// C2A1E5_ResizeAlloc.c
// Win10
// g++ 11.2.0
// 
// A function that allocates the appropriate amount of memory
//
#include <stdlib.h>
#include <string.h>

void *ResizeAlloc(void *pOld, size_t newSize, size_t oldSize)
{
    //new size is 0 so return null
    if (newSize == 0)
    {
        return NULL;
    }
    else
    {
        //dynamically allocate new memory
        void *newBlock = malloc(newSize);
        if (newBlock == NULL)
        {
            //it didn't work, return null
            return NULL;
        }
        else if (pOld == NULL)
        {
            //old was empty, return the new block
            return newBlock;
        }
        else
        {
            //copy over the memory from the old block to the new block
            if (newSize > oldSize)
            {
                memcpy(newBlock, pOld, oldSize);   
            }
            else
            {
                memcpy(newBlock, pOld, newSize);
            }
        }
        free(pOld);
        return newBlock;
    }    
}
