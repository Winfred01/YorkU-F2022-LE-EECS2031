/***************************************
* 22Fa - Lab02 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
****************************************/
#include<stdio.h>

main(){
    int count[10];
    int c; int cLetter; int i;

    for(i=0; i<10; i++){
        count[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if (!(c >= '0' && c <= '9')){
            cLetter++;
        }else{
            count[c - '0']++;
        }
    }

    printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n6: %d\n7: %d\n8: %d\n9: %d\nX: %d\n", count[0],count[1],count[2],count[3],count[4],count[5],count[6],count[7],count[8],count[9],cLetter);
}