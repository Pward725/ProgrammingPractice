// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/22/2022
// C1A7E1_main.cpp
// Win10
// g++ 11.2.0
// 
// This file contains a program to get the time elapsed between input times
//
#include "C1A7E1_MyTime.h"
#include <iostream>
#include <iomanip>
using namespace std;
static const int NUM_RUNS = 3;
MyTime *DetermineElapsedTime(const MyTime *startTime, const MyTime *endTime);
int main()
{
    //set the formatting for the output
    cout << setfill('0');
    for (int numRuns = NUM_RUNS; numRuns > 0; numRuns--)
    {
        MyTime start, end, *difference;
        char delim;
        //Get input
        cout << "Enter start time (HH:MM:SS): ";
        cin >> start.hours >> delim >> start.minutes >> delim >> start.seconds;
        cout << "Enter end time (HH:MM:SS): ";
        cin >> end.hours >> delim >> end.minutes >> delim >> end.seconds;
        //Get the elapsed time
        difference = DetermineElapsedTime(&start, &end);
        //Print results
        cout << "The time elapsed from " << setw(2) << start.hours << delim 
             << setw(2) << start.minutes << delim << setw(2) << start.seconds 
             << " to " << setw(2) << end.hours << delim << setw(2) 
             << end.minutes << delim << setw(2) << end.seconds << " is " <<
             setw(2) << difference->hours << delim 
             << setw(2) << difference->minutes << delim << setw(2) << 
             difference->seconds << "\n";
    }
    return(0);
}
