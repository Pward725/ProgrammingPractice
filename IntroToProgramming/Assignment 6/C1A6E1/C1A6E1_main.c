// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/12/2022
// C1A6E1_main.c
// Win10
// g++ 11.2.0
// 
// A program that computes the length of an input string
//
#include <stdio.h>
#include <string.h>
#define BUF_SIZE 100
size_t MyStrlen(const char *s1);

int main(void) {
    char buffer[BUF_SIZE];
    //get input
    printf("Input a string: ");
    fgets(buffer, BUF_SIZE, stdin);
    //replace newline with null terminator
    buffer[strcspn(buffer, "\n")] = '\0';
    //compute and print results
    printf("strlen(\"%s\") returned %zu\n", buffer, strlen(buffer));
    printf("MyStrlen(\"%s\") returned %zu\n", buffer, MyStrlen(buffer));
    return(0);
}
