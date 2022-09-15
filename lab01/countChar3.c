/***************************************
* 22Fa - Lab01 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
****************************************/

#include <stdio.h> // define EOF

main(){
  int c;
  int count = 0;
 
  c = getchar();
  while(c != EOF)  /* no end of file yet */
  {
    if(c != 10){
       count++;    // spaces and '\n' counted
    }

    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);

}

