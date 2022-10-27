//add your info below
/***************************************
* 22Fa - Programming Assignment 1 *
* Author: Chenxi Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku student #: 218665075
****************************************/

#include <stdio.h>
#define SIZE 45    // assume there are no more than 45 literals in the input

// assume all literals in the input are valid decimal int literals. 
// Note that the input can contain negative numbers.

int main(){
 
  int chr;
  int resu[SIZE];
  int i = 0;
  int index = 0;
  int sign = 1;

  chr = getchar();
  while ( chr != EOF ){ 
    resu[index] = 0; // initialize the value

    while ( chr != ' ' && chr != '\n' && chr != EOF){
      if (chr ==  '-')
      {
        sign = -1; // set the sign
      }else if ( chr >= '0' && chr <= '9'){
        resu[index] = resu[index]*10 + (chr - '0'); // put the current value into arr
      }

      chr = getchar();
    }

    resu[index] = resu[index] * sign; // value * sign

    sign = 1; // reset the sign
    index++; // next value
    chr = getchar();
  }
 
  printf("--------\n");
  
  for(i=0; i < index; i++) // index = number of value we have
    printf("%d\t%d\n", resu[i],resu[i] *2);
 
  return 0;
 
}


