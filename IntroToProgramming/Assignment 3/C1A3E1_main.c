// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 01/30/2022
// C1A3E1_main.c
// Win10
// g++ 11.2.0
// 
// Could you use scientific notation?
//
#include <stdio.h>
#define LEADER_CHAR '^'
#define DIAGONAL_CHAR '@'

int main(void) {
    
    int input;
    printf("input any positive decimal integer:");
    scanf("%d", &input);
    printf("n       n^7       n^8");
    printf("\n---------------------\n");
    //loop through number values
    for (int lineNum = 0; lineNum <= input; lineNum++) 
    {
        int n = lineNum;
        int exp7 = n*n*n*n*n*n*n;
        int exp8 = exp7*n;

        printf("%d       %d      %d\n", n, exp7, exp8);
    }
     
    return(0);
}
