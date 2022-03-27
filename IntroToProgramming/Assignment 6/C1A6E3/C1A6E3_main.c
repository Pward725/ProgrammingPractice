// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/20/2022
// C1A6E3_main.c
// Win10
// g++ 11.2.0
// 
// A program that gets a substring from an input string
//
#include <stdio.h>
#include <string.h>
#define BUF_SIZE 256

char *GetSubstring(const char source[], int start, int count, char result[]);

int main(void) {
    char source[BUF_SIZE], result[BUF_SIZE];
    int start, count;
    
    printf("Input a string: ");
    fgets(source, BUF_SIZE, stdin);
    printf("Input the index of the starting character " 
           "and the number of characters to capture:");
    scanf("%i %i", &start, &count);       
    //replace newlines with null terminators
    source[strcspn(source, "\n")] = '\0';
    //compute and print results
    printf("\"%s\", %i, %i, extracts \"%s\"\n", source, start, count, 
        GetSubstring(source, start, count, result));  
    return(0);
}
