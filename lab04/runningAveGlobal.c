// connect with file 'function.c'

#include <stdio.h>

//program for runningAveGlobal.c
//your infomation goes here
/***************************************
* 22Fa - Lab4 *
* Author: Chenxi, Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
************************************** **/


void run_avg (void);
extern int input; 

int main(int argc, char *argv[])
{

    printf("Enter number (-1 to quit): ");
    scanf("%d", &input);
	
    while(input != -1){	
      
      run_avg();

      printf("\n\n"); // reads again
      printf("Enter number (-1 to quit):  ");
      scanf("%d", &input);
	
     }
	 
     return 0;
}

