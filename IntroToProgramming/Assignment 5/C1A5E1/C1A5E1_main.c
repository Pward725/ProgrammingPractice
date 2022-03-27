// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/07/2022
// C1A5E1_main.c
// Win10
// g++ 11.2.0
// 
// A program that gets ratings from a number of shoppers 
// and prints the aggregate results.
//
#include <stdio.h>

#define SHOPPERS 3
#define BEST (-3)
#define WORST (-3)
#define CHOICES ((BEST) - (WORST) + 1)
#define MAX_ERRORS 3

int main(void) {
    //declare and initialize variables
    int ratings[CHOICES] = {0};
    int shopper = 0;
    int errors = 0;
    int rating;

    //Print the rules to the game
    printf("Allowed ratings are between %i and %i (max errors allowed is %i)\n"
           , WORST, BEST, MAX_ERRORS);
    
    //Loop through shopper inputs until we've hit max errors 
    //or we got through all shoppers
    do
    {
        //Get input and do error checking
        printf("Input Rating: ");
        scanf("%i", &rating);
        if (rating < WORST || rating > BEST)//input out of bounds
        {
            printf("Input Out of Bounds\n");
            errors++;
        }
        else//good value, log it and reset errors
        {
            ratings[rating - WORST]++;
            errors = 0;
            //increment to the next shopper
            shopper++;
        }
    } while (shopper < SHOPPERS && errors < MAX_ERRORS);
    int ratingVal = BEST;
    for (int ratingIndex = CHOICES - 1; ratingIndex >= 0; ratingIndex--)
    {
        printf("Rating      Quantity\n");
        printf("------      --------\n");
        printf("%6i      %8i\n", ratingVal, ratings[ratingIndex]);
        ratingVal--;
    }
     
    return(0);
}
