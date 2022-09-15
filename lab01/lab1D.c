/***************************************
* 22Fa - Lab01 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075 *
****************************************/

#include <stdio.h>

float sum(float, float);
void greet(int);

int main()
{  
   int a = 2011 + 20;
   greet(a);
   int b = 1015 - 3;
   greet(b);

   float float1; float float2;
   printf("Enter two float numbers separated by ##: ");
   scanf("%f##%f", &float1, &float2);

   float su= sum(float1, float2);
   printf( "%.6f + %.6f = %.6f\n", float1, float2, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i + j;             
}

/* need to modify this function */
void greet(int i){
  printf("Hello %d!\n", i);
}
