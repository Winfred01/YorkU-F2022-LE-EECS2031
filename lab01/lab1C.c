/***************************************
* 22Fa - Lab01 *
* Author: Last name, first name *
* Email: Your email address *
* EECS username: Your eecs login user name *
* Yorku Student #: Your student number
****************************************/

#include <stdio.h>

int main()
{  
   int a = 2011 + 20;
   greet(a);
   int b = 1015 - 3;
   greet(b);
   float x =2.2, y=3.3;
   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i + j;             
}

/* need to modify this function */
void greet(int i){
  printf("Hello!\n");
}
