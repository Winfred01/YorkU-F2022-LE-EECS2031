/* Passing an array to a function. */

#include <stdio.h>

#define MAX_INPUT 26
void display(int *arr);
int largest(int * arr);
 
// more headers, declarations, as needed

 main(int argc, char *argv[])
 {
     int array[MAX_INPUT], count;

     /* Input MAX_INPUT values from the stdin */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array+count) = i;  // store input in array[count] without using []
        count++;
        *(array+count) = -1; // all inputs should be non-negative integer.
     }


      /* Call the functions and display the returned value. */
      printf("Inputs: ");
      display(array);
     
     
      printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 
 /* displays the content of parameter int array */
 void display(int *arr)
 {
    while(*arr >= 0){
        printf("%d ", *arr);
        arr++;
    }
 }


/* This function returns the largest value */
/* in the parameter int array */
 int largest(int * arr)
 {
    int temp = *arr;

    while(*arr >= 0){
        if(*arr > temp) temp = *arr;
        arr++;
    }

    return temp;
 }

