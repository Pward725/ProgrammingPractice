// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/12/2022
// C1A6E2_main.c
// Win10
// g++ 11.2.0
// 
// A program tha compares two input strings
//
#include <stdio.h>
#include <string.h>
#define BUF_SIZE 100

int MyStrcmp(const char *s1, const char *s2);

int main(void) {
    char string1[BUF_SIZE];
    char string2[BUF_SIZE];
    //get input
    printf("Input a string: ");
    fgets(string1, BUF_SIZE, stdin);
    printf("Input another string: ");
    fgets(string2, BUF_SIZE, stdin);
    //replace newlines with null terminators
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';
    //compute and print results
    printf("strcmp(\"%s\", \"%s\") returned %i\n",
        string1, string2, strcmp(string1, string2));
    printf("MyStrcmp(\"%s\", \"%s\") returned %i\n", 
        string1, string2, MyStrcmp(string1, string2));
    return(0);
}
