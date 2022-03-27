// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/04/2022
// C1A4E1_main.c
// Win10
// g++ 11.2.0
// 
// A program that outputs the max and min between two numbers
//
#include <stdio.h>
#include "C1A4E1_ComputeMinMax.h"

int main(void) {
    
    //Get input
    double input1, input2;
    printf("input two decimal numbers separated by a space:\n");
    scanf("%lf %lf", &input1, &input2);
    
    //Do computation
    double minVal = ComputeMin(input1, input2);
    double maxVal = ComputeMax(input1, input2);

    //Print Results
    printf("ComputeMinimum(%.1lf, %.1lf) returned %.1lf\n", input1, input2, minVal);
    printf("ComputeMaximum(%.1lf, %.1lf) returned %.1lf\n", input1, input2, maxVal);
     
    return(0);
}
