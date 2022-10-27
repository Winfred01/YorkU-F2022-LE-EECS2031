//add your info below
/***************************************
* 22Fa - Programming Assignment 1 *
* Author: Chenxi Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku student #: 218665075
****************************************/

#include <stdio.h>
#define SIZE 45

// assume all floating point literals are valid float/double or int literals 
// (both 2.3, 5, .4 are considered valid). There are no negative numbers.

int main(){
 
  int chr;
  double resu[SIZE];
  int i = 0;
  int index = 0;
  double num = 0;
  int count;
  int sign = 1;
  double pow(double base, double exp);

  chr = getchar();
  while ( chr != EOF ){ 
    resu[index] = 0; // initialize the value

    while ( chr != ' ' && chr != '\n' && chr != EOF){
        
      // after '.'
      if(chr == '.'){
        chr = getchar();
        count = 1;
        while ( chr != ' ' && chr != '\n' && chr != EOF){
            num = num + (chr - '0')/pow(10,count++);
            chr = getchar();
        }
      }

      // before '.'
      else if (chr ==  '-')
      {
        sign = -1; // set the sign
        chr = getchar();
      }else if ( chr >= '0' && chr <= '9'){
        resu[index] = resu[index]*10 + (chr - '0');
        chr = getchar(); // put the current value into arr
      }
    }

    resu[index] = resu[index] * sign + num; // value * sign + num after '.'

    sign = 1; // reset the sign
    num = 0; // reset num
    index++; // next value
    chr = getchar();
  }
 
  printf("--------\n");
  
  for(i=0; i < index; i++) // index = number of value we have
    printf("%.4f\t%.4f\n", resu[i],resu[i] *2);
 
  return 0;
 
}

double pow(double base, double exp){
    double res = 1;
    for(exp; exp>0; exp--){
        res = res * base;
    }

    return res;
}