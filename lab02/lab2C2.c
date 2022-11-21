/***************************************
* 22Fa - Lab02 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
****************************************/

#include <stdio.h>

#define SIZE 10
int isPrime(int number);

main ()
{
  int i;
  int j;
  int arr[SIZE];


  srand(time(0));
  for( i = 0; i<SIZE; i++){
    int ran = rand()%41 ;   // a random number in the range of [0,40] inclusive
    arr[i] = ran;
  }

  // display the array
  printf("array [ ");
  for(i=0; i<SIZE; i++) {
    printf("%d ", arr[i]);
  }
  printf("]\n");
  // create two arrays of same size of arr, to hold even and prime numbers;
  int even[SIZE];
  int prime[SIZE];
  // scan the array to find even and prime numbers, and put them in corresponding arrays
  int countE = 0; int countP = 0; int count = 0;
  int indexE[SIZE]; int indexP[SIZE];
  // you may add other variables as needed
  for( i = 0; i<SIZE; i++){
    if(arr[i] % 2 == 0){
        indexE[countE] = i;
        countE++;
    }

    if(isPrime(arr[i])){
        indexP[countP] = i;
        countP++;
    }
  }
  
  // output the even numbers
  printf("%d even numbers:", countE);
  for(i = 0; i<countE; i++){
    printf(" %d", arr[indexE[i]]);
  }

  printf("\n");

  // output the prime numbers
  printf("%d prime numbers:", countP);
  for(i = 0; i<countP; i++){
    printf(" %d", arr[indexP[i]]);
  }

  printf("\n");
}

int isPrime(int number){
    if (number <= 1){
        return 0;
    }

    int i;

    for(i=2; i <= number/2; i++){
        if(number % i == 0){
            return 0;
        }
    }

    return 1;
}