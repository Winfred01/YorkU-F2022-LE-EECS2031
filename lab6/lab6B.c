

/* Reads in a list of strings from the keyboard, then re-organize them */
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAX_LINES 32
 #define MAX_COLS  52 
  void exchange2D(char p[][MAX_COLS], int n);
  void print2D(char p[][MAX_COLS], int n);


 main()
 {
     char inputs[MAX_LINES][MAX_COLS];
     char temp[MAX_COLS];
     int n = 0;
     printf("sizeof inputs: %d\n\n", sizeof inputs);
 
     /* Read in the lines from the keyboard now, using function fgets() */
     printf("Enter string: ");
     fgets(inputs[0], MAX_COLS, stdin);
     
     while (strcmp(inputs[n], "xxx\n")  )
     {
        
        n++;
        printf("Enter string: ");
        fgets(inputs[n], MAX_COLS, stdin);
     
     }
     printf("\n");
     
     // displays the array by calling function print2D(...)
     print2D(inputs,n);
     // swaps the first and second row here
     sprintf(temp,"%s", inputs[0]);
     sprintf(inputs[0],"%s", inputs[1]);
     sprintf(inputs[1],"%s", temp);
     // calls sub-function exchange2D() to swap some other rows
     exchange2D(inputs,n);

     printf("\n== after swapping ==\n");
     
     // displays the (exchanged array) by calling function print2D() 
     print2D(inputs,n);
	 
     
     return 0;
 }


 // do exchange of rows. have to involve data movement 
 // Assume the inputs contain at least 4 lines. n >= 4
 void exchange2D(char p[][MAX_COLS], int n)
 {
    int i = 2;
    char temp[MAX_COLS];

    for ( i; i+1 < n; i = i + 2)
    {
        sprintf(temp,"%s", p[i]);
        sprintf(p[i],"%s", p[i+1]);
        sprintf(p[i+1],"%s", temp);
    }
 }

 // print the 2D array, row by row
 void print2D(char p[][MAX_COLS], int n)
 {
    int i;
    for(i=0; i<n; i++){
        printf("[%d]: %s", i, p[i]);
    }
 }                        

