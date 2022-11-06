/***************************************
* 22Fa - Lab03 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
****************************************/

#include <stdio.h>
#include <stdlib.h>  // for atoi

#define SIZE 12
int my_atoi (char c[], int base);
int power (int base, int n);


int main(){
  int a,b,base;
  char arr [SIZE];

  printf("Enter a word of positive number and base, or 'quit': " );
  scanf("%s %d", arr, &base);
  while( !(arr[0] == 'q' && arr[1] == 'u' && arr[2] == 'i' && arr[3] == 't' && arr[4] == '\0'))
  {
    printf("%s\n", arr);

    b = my_atoi(arr, base);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n\n", b,b,b, b*2, b*b);

    printf("Enter a word of positive number and base, or 'quit': " );
    scanf("%s %d", arr, &base);
  }

  return 0;

}

/* converts an array of (digit) characters into a decimal int */

/* Recommended textbook K&R scans from left to right.
 Here you should scan from RIGHT to LEFT. This is a little more complicated 
 but more straightforward (IMHO) */

int my_atoi (char c[], int base)
{
    int i, n, count;
    n = 0;
    count = 0;
    for(i = strlen(c); i > 0; i--){  //从后往前数;
        n = power(base, count)*(c[i-1] - '0') + n; //因为strlen(c)是读到\0那位，所以要i-1;
        count++;
    }

    return n;
}

int power (int base, int n){
    int i, res;
    res = 1;

    for(i=n; i>0; i--){
        res = res * base;
    }

    return res;
}
