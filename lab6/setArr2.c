

#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers. Global variable

int main(int argc, char *argv[])
{
     int i;
       
     setArr(0, -10);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);
       
        
     for(i=0; i<5;i++) 
        printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i) );   /* should be -10,100, 200,300,400 */
     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value va */
void setArr (int index, int va){
     int i = va;
     arr[index] = &i;
}

/*
     output:
          arr[0] -*-> 400 400
          arr[1] -*-> 400 400
          arr[2] -*-> 400 400
          arr[3] -*-> 400 400
          arr[4] -*-> 400 400
     
     Only one int memory address was created, 
     and all pointers point to the same address, 
     causing the value stored earlier to be overwritten by the value stored later.

*/
