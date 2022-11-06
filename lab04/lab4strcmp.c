//program for mystrcmp.c
//your info goes here
/***************************************
* 22Fa - Lab4 *
* Author: Chenxi, Liu *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
************************************** **/

#include<stdio.h>
#include<string.h>
// more header file include and declarations as needed

#define SIZES 34
int my_strcmp(char x[], char y[]);


int main(){
   char a[SIZES];
   char b[SIZES];
   int resu;
   int resu2;
   
   scanf("%s", a); 
   scanf("%s",b);
    
   while ( strcmp(a, "xxx") || strcmp(b, "xxx") ){
      resu = strcmp(a,b); 
      if ( resu < 0 ) 
         printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if ( resu > 0 ) 
         printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else 
         printf("\"%s\" and \"%s\" have same content\n", a, b);
      
      resu2 = my_strcmp(a,b);
      if ( resu2 < 0 ) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if ( resu2 > 0 ) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" have same content\n\n", a,b);
   
      scanf("%s", a); 
      scanf("%s",b);
   }
}

// your own version of strcmp implementation goes here
int my_strcmp(char x[], char y[]){
   int i = 0; 
   int flagx = 1; 
   int flagy = 1;
   int res = 0;
   while((flagx || flagy) && i < SIZES) // check the end of the strings, and index < SIZES
   {
      if (x[i] == '\0') flagx = 0; // string x at the end
      if (y[i] == '\0') flagy = 0; // string y at the end

      res = x[i] - y[i];

      if (res > 0) return res;
      else if (res < 0) return res;

      i++;

   }

   return 0;
   
}
