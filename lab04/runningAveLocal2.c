// program for runningAveLocal2.c
// your information goes here
/***************************************
* 22Fa - Lab4 *
* Author: Chenxi, Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
************************************** **/

#include <stdio.h>

void run_avg(int);

int main(int argc, char *argv[])
{
	
   int input;  
   printf("Enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        run_avg(input);

        printf("\n\n"); // reads again
        printf("Enter number (-1 to quit):  ");
        scanf("%d", &input);
    }
	
    return 0;
}

void run_avg(int input)
{
    static int count = 0;
    count++;

    static int sum1 = 0; // set static local var
    double ans = 0;

    sum1 += input;
    ans = sum1/(count * 1.0); // change ans to double/double, not double/int
    printf("running average is %d / %d = %.3f",  sum1, count, ans);    
}
