/***************************************
* 22Fa - Lab1 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075 *
****************************************/

#include <stdio.h>

int sum (int i, int j)
{
  return i+j;           
}


main()
{
  int a, b;
  printf("Please enter two integers separated by a blank: " );
 
  scanf( "%d %d",  &a, &b);     /* assign values to variables a b  */
 
  printf("Entered %d and %d. Sum is %d\n", a, b, sum(a,b));
}

