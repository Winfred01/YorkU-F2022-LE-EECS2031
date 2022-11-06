
#include <stdio.h>
#include <string.h>

#define SIZE 52 
void sortArr (char * arr);
void sortArrB (char * arr);
void swap(char * a, char * c);

// more headers, declarations, as needed

int main()
{
   char arr[SIZE]; char arrB[SIZE];
   fgets(arr,SIZE,stdin);
   while ( strcmp(arr,"quit\n") )
   {
       *(arr + strlen(arr) - 1) = '\0'; // manually remove the trailing \n in first place
       
       strcpy(arrB, arr);
       
       sortArr(arr);
       printf("%s\n", arr);

       sortArrB(arrB);
       printf("%s\n\n", arrB);

       fgets(arr,SIZE,stdin);

    }
   return 0;
}

// two sorting function definitions
void sortArr (char * arr){
   int i;
   int j;
   int n = strlen(arr);

   for(i=0; i<= (n-2); i++){
      //printf("i: %d, n: %d\n\n", i,n); //*************************
      for(j=n-1; j>=i+1; j--){
         //printf("j: %d, arr[j]: %c, n: %d\n\n", j,*(arr+j),n); //************************
         if(*(arr+j) < *(arr+j-1)) 
            swap(arr+j, arr+j-1);
      }
   }
}

void sortArrB (char * arr){
   int i;
   int j;
   int temp =0;
   int n = strlen(arr);
   for(i=0; i<= (n-2); i++){
      temp = i;
      for(j=i+1; j<n; j++){
         if(*(arr+j) < *(arr+temp)) temp = j;
      }

      swap(arr+i, arr+temp);
   }
}

void swap(char * a, char * c){
   char temp = *a;
   *a = *c;
   *c = temp;
}
