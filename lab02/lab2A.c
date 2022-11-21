/***************************************
* 22Fa - Lab02 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
****************************************/
#include<stdio.h>
int isDigit(char);
int isLetter(char);
int isOperator(char);

int i1; char c2;

int main(){

    while(1){
        printf("Enter an integer and a character separated by blank: ");
        scanf("%d %c", &i1, &c2);

        if (i1 == -10000){
    	    break;
    	}
        if(isLetter(c2)){
            printf("Character '%c' represents a letter\n", c2);
        }else if(isDigit(c2)){
            printf("Character '%c' represents a digit. Sum of %d and %c is %d\n", c2, i1, c2, i1+c2-'0');
        }else if(!isOperator(c2)){
            printf("Character '%c' represents others\n", c2);
        }else if(isOperator(c2)){
            printf("Character '%c' represents an operator\n", c2);
        }

        printf("\n");
    }

    return 0;
}

int isDigit(char c){
    if(c >= '0' && c <= '9'){
        return 1;
    }

    return 0;
}

int isLetter(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return 1;
    }

    return 0;
}

int isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%'){
        return 1;
    }

    return 0;
}