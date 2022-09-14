/***************************************
* 22Fa - Lab1 *
* Author: Last name, first name *
* Email: Your email address *
* EECS username: Your eecs login user name *
* Yorku Student #: Your student number
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

