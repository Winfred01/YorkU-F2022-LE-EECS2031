#include <stdio.h>
#include <string.h>

#define SIZE 12

main (){
   char str[SIZE];
   int i;
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
    printf("\n");

   //str[15] = 'a';


   scanf("%s", str);

   while ( str != "quit"){ 
    for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);

    printf("%s  %d  %d\n\n", str, sizeof str,strlen(str));

    scanf("%s", str); // read again
  }     

   return 0;
}
