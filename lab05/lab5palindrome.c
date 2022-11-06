
#include <stdio.h>
#include <string.h>

#define SIZE 42

int isPalindrome (char * str);
void printReverse(char * str);


int main ()
{   
   int result;  char c; int i = 0;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while ( strcmp(arr, "quit\n") )
   {
      *(arr + strlen(arr) - 1) = '\0';  // remove the trailing \n in the first place
      
      // print backward
      printReverse(arr);
   
      if (isPalindrome (arr)) 
         printf ("\nIs a palindrome.\n\n");
      else 
         printf ("\nNot a palindrome.\n\n");
 
      fgets(arr,SIZE,stdin);
    }
    return 0;
}


// assume the '\n' has already been replaced manually
int isPalindrome (char * str)
{
   char* p = str + strlen(str) - 1; // str start at index'0', so we need -1
   while( (p-str) > 0){
      if(*p == *str){
         p--;
         str++;
      }else{
         return 0;
      } 
   }
   
   return 1;
}

// assume the '\n' has already been replaced manually
void printReverse(char * str)
{
   char* p = str + strlen(str) - 1;

   while((p-str) >= 0){
      printf("%c", *p);
      p--;
   }
}

