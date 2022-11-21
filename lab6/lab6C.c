


#include <stdio.h>
#include <string.h>
#define SIZE 11

void exchangeParr(char *pArr[], int n);
void printParr(char *pArr[], int n);
void printParr2(char **pArr, int n);


main(){

  char * inputs[SIZE] = {"giraffes are high 0", "mosquitos are annoying 1",
  "monkeys are smart 2", "kangaroos are funny 3"};
  char * temp;

  char arr1 [] = "dogs are friendly 4";
  char arr2 [] = "hippos are huge 5";
  char arr3 [] = "cobras are fearsome 6";
  char arr4 [] = "foxes 7";
  char arr5 [] = "elephants 8";
  char arr6 [] = "hens 9";
  char arr7 [] = "bisons 10";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  inputs[8] = arr5;
  inputs[9] = arr6;
  inputs[10] = arr7;

  printf("sizeof char*: %d, sizeof pointer array: %d\n\n", sizeof(char*), sizeof inputs );

  // displays the array by calling function printParr()
  printParr(inputs, SIZE);

  // swaps pointees of first and second element pointers here
  temp = inputs[0];
  inputs[0] = inputs[1];
  inputs[1] = temp;

  // calls function exchangeParr() to swap some other pointees;
  exchangeParr(inputs, SIZE);

  printf("\n== after swapping ==\n");   

  // now displays the exchanged array by calling function printParr()
  printParr(inputs, SIZE);
  
  printf("\n");
  // displays the exchanged array again by calling another function printParr2()
  printParr2(inputs, SIZE);

}

/* exchanges some pointees of the pointer array */
void exchangeParr(char *pArr[], int n){
  int i = 2;
  char* temp;

  for ( i; i+1 < n; i = i + 2)
  {
    temp = *(pArr+i);
    *(pArr+i) = *(pArr+i+1);
    *(pArr+i+1) = temp;
  }
}

/* prints the first n pointees of the pointer array */ 
void printParr(char *pArr[], int n){
  int i;
  for (i = 0; i < n; i++)
  {
    printf("[%d] -*-> %s\n", i, *(pArr+i));
  }
  
}

/* prints the first n pointees of the pointer array, 'decayed' argument */
void printParr2(char **pArr, int n){
  int i;
  for (i = 0; i < n; i++)
  {
    printf("[%d] -*-> %s\n", i, *(pArr+i));
  }
}
