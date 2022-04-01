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

int main(int argc, char *argv[]) 
{
    //print the number of args
    printf("%d\n", argc);
    //print each arg on a newline
    for (int argNum = 0; argNum < argc; argNum++)
    {
        printf("%s\n", argv[argNum]);
    }
    return(0);
}
