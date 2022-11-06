
/* Passing an array to a function. */

#include <stdio.h>

#define MAX_INPUT 26
 void display(int *arr, int len);
 int largest(int * arr, int len);
 
// more headers, declarations, as needed

 main(int argc, char *argv[])
 {
     int array[MAX_INPUT], count;

     /* Input MAX_INPUT values from the stdin */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array+count) = i;  // store input in array[count] without using []
        count++;
     }


      /* Call the functions and display the returned value. */
      printf("Inputs: ");
      display(array,count);
     
     
      printf("\nLargest value: %d\n", largest(array,count));
     
     return 0;
 }
 
 /* displays the content of parameter int array */
 void display(int *arr, int len)
 {
    while(len > 0){
        printf("%d ", *arr);
        arr++;
        len--;
    }
 }


/* This function returns the largest value */
/* in the parameter int array */
 int largest(int * arr, int len)
 {
    int temp = *arr;

    while(len > 0){
        if(*arr > temp) temp = *arr;
        arr++;
        len--;
    }

    return temp;
 }

