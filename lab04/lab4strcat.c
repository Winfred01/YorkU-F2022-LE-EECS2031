//program for my_strcat.c
//your information goes here
/***************************************
* 22Fa - Lab4 *
* Author: Chenxi, Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
************************************** **/

#include<stdio.h>
#include<string.h> // string library header files

//more declarations as needed

#define SIZES 32
void my_strcat(char des[], char src[]);

int main(){
   char a[SIZES];
   char b[SIZES];
   char c[SIZES];
   char d[SIZES];

   scanf("%s",a);
   scanf("%s",b);
   while ( strcmp(a, "xxx") || strcmp(b, "xxx") ){ // "a" equals "xxx" (with '/0') will return 0, not equal will return other number.
    
      strcpy(c,a); strcpy(d,b);

      strcat(a,b);
      my_strcat(c,d);
      
      printf("strcat:   %s\n", a); 
      printf("mystrcat: %s\n\n", c);

      scanf("%s",a);
      scanf("%s",b);
   }
}

//your own version of strcat implmentation goes here
void my_strcat(char des[], char src[]){
   int i;
   int j = 0;
   for(i= strlen(des); i<SIZES; i++){
      des[i] = src[j++]; // add src after des, and replace '/0' of des
   }
}
