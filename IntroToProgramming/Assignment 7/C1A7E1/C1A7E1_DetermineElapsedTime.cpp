// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 02/22/2022
// C1A7E1_DetermineElapsedTime.cpp
// Win10
// g++ 11.2.0
// 
// File that contains a function to compute 
// time elapsed between two given times
//
#include "C1A7E1_MyTime.h"
const int HOURS_PER_DAY = 24;
const int MINUTES_PER_HOUR = 60;
const int SECONDS_PER_MINUTE = 60;

MyTime *DetermineElapsedTime(const MyTime *startTime, const MyTime *endTime)
{
    static MyTime elapsedTime;
    //convert times to seconds
    long startTimeInSecs = startTime->hours * MINUTES_PER_HOUR 
        * SECONDS_PER_MINUTE + startTime->minutes * SECONDS_PER_MINUTE
        + startTime->seconds;
    long endTimeInSecs = endTime->hours * MINUTES_PER_HOUR * SECONDS_PER_MINUTE
        + endTime->minutes * SECONDS_PER_MINUTE + endTime->seconds;
    //check to see if the end time should be interpreted as tomorrow
    if (endTimeInSecs <= startTimeInSecs)
    {
        endTimeInSecs += HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE;
    }
    //find the elapsed time
    long elapsedTimeInSecs = endTimeInSecs - startTimeInSecs;
    //convert back into hours minutes and seconds
    elapsedTime.hours = int((elapsedTimeInSecs / SECONDS_PER_MINUTE)
                                                / MINUTES_PER_HOUR);
    elapsedTimeInSecs -= elapsedTime.hours * MINUTES_PER_HOUR 
                                           * SECONDS_PER_MINUTE;
    elapsedTime.minutes = int(elapsedTimeInSecs / SECONDS_PER_MINUTE);
    elapsedTimeInSecs -= elapsedTime.minutes * SECONDS_PER_MINUTE;
    elapsedTime.seconds = int(elapsedTimeInSecs);
    
    return(&elapsedTime);
}
