// program for lab4fgets.c
// your information goes here
/***************************************
* 22Fa - Lab4 *
* Author: Chenxi, Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
************************************** **/

#include <stdio.h>
#include <string.h>
#include <math.h>
//need to compile the program using -lm flag of gcc.

#define SIZE 12
#define SIZE2 42

int main(int argc, char *argv[])
{
     char resu[SIZE2];
     char input[SIZE2];    
     char name[SIZE];  
     int age;
     float rate;
	
     printf("Enter name, age and rate (or \"exit\"): ");
     fgets(input, SIZE2, stdin);
     while (strcmp(input, "exit\n")) // When fgets reads in a line, it appends a new line character \n at the end (before \0).
     {    
       //output the original input using two different IO functions.
      printf("%s", input);  // no \n is needed 
      fputs(input, stdout); 
      
      sscanf(input, "%s %d %f", name, &age, &rate);// read from string and go to vars
      if(name[0] >= 'a' && name[0] <= 'z') name[0] -= 'a' - 'A'; // first letter of name is capitalized
      age += 10;
      rate *= 2;
      int ce = ceil(rate);
      int fl = floor(rate);

      sprintf(resu, "%s-%d-%.3f-[%d,%d]\n", name, age, rate, fl, ce);
      fputs(resu, stdout); 

      /* now use fgets() to read again */
      printf("Enter name, age and rate (or \"exit\"): ");
      fgets(input, SIZE2, stdin);
     } 
      return 0;
}
