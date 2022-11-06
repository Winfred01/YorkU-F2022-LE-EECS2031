//program for lab4table1.c
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
//.... more headers as needed

#define numROWS 22
#define numCOLUMNS 32

int main(int argc, char *argv[])
{
    char inputs_table [numROWS][numCOLUMNS];
    char nameS[10]; char ageS[10]; char rateS[10];
    char input[numCOLUMNS];
    char resu[numCOLUMNS];
    char name[10];
    int rows = 0; 
    int age;
    float rate;
    int i;
    

    printf("Enter name, age and rate: ");
    scanf("%s %s  %s", nameS, ageS, rateS); 
    

    while (strcmp(nameS, "xxx") && rows < numROWS)        
    {   
        sprintf(input, "%s %s %s", nameS, ageS, rateS);
        
        strcpy(inputs_table[rows], input); // whole row level
        rows++;

        // modified string of the input
        sscanf(input, "%s %d %f", name, &age, &rate);// read from string and go to vars
        
        for (i = 0; i < strlen(nameS); i++)
        {
            if(name[i] >= 'a' && name[i] <= 'z') name[i] -= 'a' - 'A'; // letter of name is capitalized
        }
        age += 10;
        rate *= 1.5;
        sprintf(resu, "%s %d %.2f", name, age, rate);

        strcpy(inputs_table[rows], resu); // whole row level
        rows++;
          

       /* now read again using function scanf(%s %s %s) */ 
        printf("Enter name, age and rate: ");
        scanf("%s %s  %s", nameS, ageS, rateS);       
    }
    
     printf("\nRecords generated in file %s on %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the table row-by-row */      
	for(i=0; i < rows; i++)
    printf("row [%d] : %s\n", i, inputs_table[i]);
    
    
    return 0;
}

