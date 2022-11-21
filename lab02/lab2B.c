/***************************************
* 22Fa - Lab02 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
****************************************/
#include<stdio.h>

main(){
    int c; int outC;

    while ((c = getchar()) != EOF){
        if ((c >= 'a' && c <= 'z')){
            outC = c - ('a' - 'A');
            putchar(outC);
        }else if (c == ' '){
            outC = c;
            putchar(outC);
        }else if (c >= 'A' && c <= 'Z'){
            outC = c;
            putchar(outC);
        }else if (c >= '0' && c < '5'){
            outC = '-';
            putchar(outC);
        }else if (c == '5'){
            outC = c;
            putchar(outC);
        }else if (c > '5' && c <= '9'){
            outC = '+';
            putchar(outC);
        }else{
            outC = c;
            putchar(outC);
        }
    }

    printf("\n");
}