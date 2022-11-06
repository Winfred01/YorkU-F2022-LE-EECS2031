// connect with file 'runningAveGlobal.c'

/***************************************
* 22Fa - Lab4 *
* Author: Chenxi, Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
************************************** **/
#include <stdio.h>

// define all global variables and a (global) function

int count = 0;
int input;

void run_avg (void)
{
    
    count++;

    static int sum1 = 0; // set static local var
    double ans = 0;

    sum1 += input;
    ans = sum1/(count * 1.0); // change ans to double/double, not double/int
    printf("running average is %d / %d = %.3f",  sum1, count, ans); 
}

