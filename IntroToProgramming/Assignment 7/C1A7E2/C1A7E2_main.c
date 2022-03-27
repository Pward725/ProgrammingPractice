// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/27/2022
// C1A7E2_main.c
// Win10
// g++ 11.2.0
// 
// A program that gets and displays lunch food items
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LUNCH_QTY 3
#define NUM_LUNCH_INIT 2
#define BUF_SIZE 100

int main(void) {
    char appleString[] = "Apple", saladString[] = "Salad";

    struct Food
    {
    char *name; /* "name" attribute of food */
    int weight, calories; /* "weight" and "calories" attributes of food */
    } lunches[LUNCH_QTY] = {{appleString, 4, 100}, {saladString, 2, 80}};
    char foodName[BUF_SIZE];

    for (int lunchNum = NUM_LUNCH_INIT; lunchNum < LUNCH_QTY; lunchNum++)
    {
        //Get input
        printf("Input the space separated name, weight, "
               "and caloric content of a food item: ");
        scanf("%s %d %d", &foodName, &lunches[lunchNum].weight,
                                     &lunches[lunchNum].calories);
        int lengthOfName = strlen(foodName) + 1;
        //Dynamically allocate memory using malloc()
        lunches[lunchNum].name = (char*)malloc(lengthOfName 
                                                    * sizeof(char));
        //Check if the memory has been successfully allocated by malloc or not
        if (lunches[lunchNum].name == NULL) 
        {
            printf("");
            fprintf( stderr, "Memory allocation failed.\n");
            return(1);
        }
        else 
        {
            //Memory has been successfuly allocated, copy the string over
            memcpy(lunches[lunchNum].name, foodName, lengthOfName);
        }
    }
    //Print the lunch table
    for (int lunchNum = 0; lunchNum < LUNCH_QTY; lunchNum++)
    {
        printf("%20s %5d %5d\n", lunches[lunchNum].name, lunches[lunchNum].weight,
                 lunches[lunchNum].calories);
        free(lunches[lunchNum].name);
    }

    return(0);
}
