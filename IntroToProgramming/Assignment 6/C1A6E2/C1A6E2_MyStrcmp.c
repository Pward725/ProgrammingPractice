// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/14/2022
// C1A6E2_MyStrcmp.c
// Win10
// g++ 11.2.0
// 
// A function that compares two strings and returns 
// the difference between the first differing characters
//

int MyStrcmp(const char *s1, const char *s2)
{
    //While they're not equal and not at the end of the string
    while ((*s1 == *s2) && (*s1 != '\0'))
    {
        s1++;
        s2++; 
    }
    return(*s1 - *s2);//return the difference
}
