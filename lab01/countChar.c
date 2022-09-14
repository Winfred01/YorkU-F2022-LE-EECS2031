/***************************************
* 22Fa - Lab01 *
* Author: Last name, first name *
* Email: Your email address *
* EECS username: Your eecs login user name *
* Yorku Student #: Your student number
****************************************/

#include <stdio.h> // define EOF

main(){
  int c;
  int count = 0;
 
  c = getchar();
  while(c != EOF)  /* no end of file yet */
  { 
    count++;  // spaces and '\n' counted

    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);

}

