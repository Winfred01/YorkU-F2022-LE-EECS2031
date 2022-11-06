#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    srand(time(0));
    int i;
    for( i = 0; i<5; i++)
        printf(" %d ", rand() );
    printf("\n");
    for( i = 0; i<5; i++)
        printf(" %d ", rand()%6+1 );   // random number in range of [1,6] inclusive  
    
    printf("\n");

    printf("current location: \n");

    system("pwd");
    
    printf("\n%s\n\n", "content of current location:");
    system("ls -l");

    system("mkdir xxxDir");
  
    printf("\n%s\n\n", "create a sub-directory");

    system("ls -l");

    system("rmdir xxxDir");
  
    printf("\n%s\n\n", "then delete it");

    system("ls -l");


    return 0;
}

