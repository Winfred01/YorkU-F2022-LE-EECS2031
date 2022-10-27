// your info here
/***************************************
* 22Fa - Programming Assignment 1 *
* Author: Chenxi Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku student #: 218665075
****************************************/

#include <stdio.h>
#include <string.h>
//... more header as needed

/*********  DO NOT CHANGE THESE CONSTANTS IN THE FINAL SUBMISSION *********/

#define MAX_SIZE 20
#define SUCCESS 0

char order[5]; // global variable, asc or desc

/******************  YOUR CODE STARTS HERE ******************/
/************************************************************/
/* 
   Input: array A with "siz" elements in it and an integer d
   Output: d is added to the array.
   Return a non-negative number if the addition is successful.
   Return a negative number if the addition is unsuccessful.
   Unsuccessful/Error condition(s): A reaches the MAX_SIZE already.
 */
 
int myAdd( int A[], int * siz, int d )
{
   /* ADD YOUR CODE HERE */
   int indexadd = 0;
   int size = *siz;
   int move = size;
   int i;

   if (size >= MAX_SIZE) {
    return -1;
   }
  
   if (size == 0){
    A[0] = d;
   }

   if (size > 0 && size < MAX_SIZE && !strcmp(order, "asc\n")){
    for(i=0; i<size; i++){
      if(A[i] >= d){
        indexadd = i;
        break;
      }else{
        indexadd = size;  //if d is the largest, then insert at the end
      }
    }

      while(indexadd < move){ // move all element that > d  1 more index
        A[move] = A[move-1];
        move--;
      }
      A[indexadd] = d;  // insert

   }else if (size > 0 && size < MAX_SIZE && !strcmp(order, "desc\n")){
    for(i=0; i<size; i++){
      if(A[i] <= d){
        indexadd = i;
        break;
      }else{
        indexadd = size; // if d is the smallest, then insert at the end
      }
    }
      while(indexadd < move){// move all element that < d  1 more index
        A[move] = A[move-1];
        move--;
      }

      A[indexadd] = d; // insert
   }

   (*siz)++;
   return 1;

}


/* 
   Input: array A with "siz" elements in it, and an integer d
   Output: If d is found in the array, return the index of the cell containing d.
   Otherwise return a negative number if d is not found.
   Unsuccessful/Error condition(s): d is not found.

   note: this must be a 'binary search', and should be recursive (i.e., no loops)
 */

/* you may need a recursive helper funciton with heading similar to this*/

int myBinarySearch_asc_Recursive_helper( int A[], int d,  int start, int end ) {
    if (end >= start) {
      int mid = start + (end - start) / 2;
      if (A[mid] == d)
        return mid;
    if(A[mid] >= d)
      return myBinarySearch_asc_Recursive_helper(A, d, start, mid - 1);
    return myBinarySearch_asc_Recursive_helper(A, d, mid + 1, end);
  }
  return -1;
}

int myBinarySearch_desc_Recursive_helper( int A[], int d,  int start, int end ) {
    if (end >= start) {
      int mid = start + (end - start) / 2;
      if (A[mid] == d)
        return mid;
    if(A[mid] <= d)
      return myBinarySearch_desc_Recursive_helper(A, d, start, mid - 1);
    return myBinarySearch_desc_Recursive_helper(A, d, mid + 1, end);
  }
  return -1;
}
 
int myBinarySearch_Recursive( int A[], int siz, int d )
{
   /* ADD YOUR CODE HERE */ 
   //call a recursive helper function
   // order is asc
   if(!strcmp(order, "asc\n")) return myBinarySearch_asc_Recursive_helper(A, d, 0, siz-1);

   if(!strcmp(order, "desc\n")) return myBinarySearch_desc_Recursive_helper(A, d, 0, siz-1);

}

/* 
   Input: array A with "siz" elements in it, and an integer d
   Output: Return a negative number if d is not found.
   Otherwise d is removed from the array and return 0.
   Error condition(s): d does not exist in A.
 */

int myRemove( int A[], int *siz, int d )
{
   /* ADD YOUR CODE HERE */
   int i;
   int size = *siz;
   int index = MAX_SIZE;
  
  for(i=0; i<size; i++){
    if(A[i] == d) {
      index = i; // find the index of d if exist
      (*siz)--;
      break;
    }
  }

  while (index < size)
  {
    A[index++] = A[index + 1];
  }

   if(index >= MAX_SIZE) return -1;
   else return 1;
}


/* 
   Input: array A with "siz" elements
   Output: Display the array on the standard output with one space between every two numbers. 
   Print a new line after the last element.
 */

void printArray( int A[], int siz )
{
  int i; 
  printf("[ ");
  for ( i = 0; i < siz; i++ )
     printf("%d ", A[ i ] );
  printf( "]\n" );
}

/* main() function 
 */
int main()
{
 int myArray[MAX_SIZE];
 int retCode, data;
 char action;
 char a[20];

 do{
   printf("sort order: ascending (asc) or descending (desc)? ");
   fgets(order, 10, stdin);
 
 } while ( strcmp(order, "desc\n") && strcmp(order, "asc\n") );
 
 /*******************  YOUR CODE ENDS HERE *******************/
/************************************************************/

/*********  DO NOT CHANGE ANYTHING BELOW THIS LINE IN THE FINAL SUBMISSION ****/
 
 int size = 0; // local varible
 do {
  fgets(a, 20, stdin);
  sscanf(a, "%c %d", &action, &data ); 
 
  switch( action )
  {
    case 'a': /* add */
    case  'A':
      retCode = myAdd( myArray, &size, data );
      if ( retCode >= SUCCESS ) {
        printArray( myArray, size ); 
      }
      else
        printf( "Failed to add %d.\n", data );  
      break; 
        
    case 'r': /* remove */
    case 'R':
      retCode = myRemove( myArray, &size, data );
      if ( retCode >= SUCCESS ) {
        printArray( myArray, size ); 
      }
      else
        printf( "Failed to remove %d.\n", data );    
      break;  
                    
    case 's': /* search */
    case 'S':
      retCode = myBinarySearch_Recursive( myArray, size, data );
      if( retCode >= 0 )
        printf( "Found %d at index %d.\n", data, retCode );
      else 
        printf( "Not found %d.\n", data );        
      break;
      
    case 'q':  /* quit */
    case 'Q':
      /* To quit, enter an arbitrary integer and character (action) 'q' or 'Q'.
         This is not elegant but makes the code simpler.  */  
      /* Do nothing but exit the switch statement */
      break; 
    
    default:
      printf( "Invalid operation %c\n", action );  
  }
 } while ( action != 'q' && action != 'Q' );

 return 0; 
} // end main
