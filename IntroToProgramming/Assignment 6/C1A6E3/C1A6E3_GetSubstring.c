// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/20/2022
// C1A6E3_GetSubstring.c
// Win10
// g++ 11.2.0
// 
// A function to return a substring
//

char *GetSubstring(const char source[], int start, int count, char result[])
{
    char *temp = result;
    //increment the source pointer to the place we'd like to start copying
    while (start > 0 && *source != '\0')
    {
        source++;
        start--;
    } 
    //copy 'count' number of characters over to the result array
    while (count > 0 && *source != '\0')
    {
        *temp = *source;
        temp++;
        source++;
        count--;
    }
    *temp = '\0';
    return(result);
}
