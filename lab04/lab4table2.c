//program for lab4table2.c
//your info goes here
/***************************************
* 22Fa - Lab4 *
* Author: Chenxi, Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
************************************** **/
#include <stdio.h>
#include <string.h>
// more headers as needed


#define numROWS 22
#define numCOLUMNS 32

int main(int argc, char *argv[])
{
     char input_table[numROWS][numCOLUMNS];
     int current_row=0;
     char resu[numCOLUMNS];
     char name[10];
     int age;
     float rate;
     int i;
  	
     printf("Enter name, age and rate: ");
     fgets(input_table[current_row], 30, stdin); // read into table row directly. add a \n.  Don't change this line
	 
     sscanf(input_table[current_row], "%s %d %f", name, &age, &rate);// read from string and go to vars
 
     while(strcmp(name, "xxx") && current_row < numROWS)        
     {    
	 /* now, may want to 'tokenize' the current input line  */	    
	     current_row++;
          for (i = 0; i < strlen(name); i++)
          {
               if(name[i] >= 'a' && name[i] <= 'z') name[i] -= 'a' - 'A'; // letter of name is capitalized
          }
          age += 10;
          rate *= 1.5;
          sprintf(resu, "%s %d %.2f\n", name, age, rate);

          strcpy(input_table[current_row], resu); // whole row level
          current_row++;
          
          printf("Enter name, age and rate: ");
          fgets(input_table[current_row], 30, stdin); // read into table row directly. add a \n.  Don't change this line
          sscanf(input_table[current_row], "%s %d %f", name, &age, &rate);
     }

     printf("\nRecords generated in file %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the table row-by-row */
	for(i=0; i < current_row; i++)
          printf("row [%d] : %s", i, input_table[i]);

     return 0;
}

