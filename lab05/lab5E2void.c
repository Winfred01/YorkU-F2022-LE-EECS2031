
/* Passing an array to a function. */

#include <stdio.h>

#define MAX_INPUT 26
 void display(int *arr, int len);
 void largest(int * arr, int len, int* p);
 
// more headers, declarations, as needed

 main(int argc, char *argv[])
 {
     int array[MAX_INPUT], count;
     int* p = array;

     /* Input MAX_INPUT values from the stdin */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array+count) = i;  // store input in array[count] without using []
        count++;
     }


      /* Call the functions and display the returned value. */
      printf("Inputs: ");
      display(array,count);
     
      largest(array,count,p);
      printf("\nLargest value: %d\n", *p);
     
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
 void largest(int * arr, int len, int* p)
 {
    // *p = *arr;

    while(len > 0){
        if(*arr > *p) *p = *arr;
        arr++;
        len--;
    }
 }

