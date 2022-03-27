// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 01/23/2022
// C1A2E2_main.c
// Win10
// g++ 11.2.0
// 
// A C program which outputs a triangle of characters
//
#include <stdio.h>
#define LEADER_CHAR '^'
#define DIAGONAL_CHAR '@'

int main(void) {
    int inputInt;
    printf("input any positive decimal integer:");
    scanf("%d", &inputInt);
    //Number of lines will be equal to the input number
    for (int lineNum = inputInt; lineNum > 0; lineNum--) 
    {
        //number of leading characters will start at the input number and get succesively smaller
        for (int spaceNum = 1; spaceNum < lineNum; spaceNum++) 
        {
            printf("%c", LEADER_CHAR); 
        }
        printf("%c\n", DIAGONAL_CHAR);
    }
    return(0);
}
