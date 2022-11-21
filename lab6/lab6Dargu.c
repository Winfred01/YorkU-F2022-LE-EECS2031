
#include <stdio.h>
#include <string.h>

int getSum(char *num[], int n);
int getDiff(char *num[], int n);
int my_atoi (char c[], int base);
int power (int base, int n);

int main(int argc, char* argv[]){
    printf("There are %d arguments (excluding \"%s\")\n", argc-1, argv[0]);

    if(strcmp(argv[1], "sum") == 0){
        int i;
        printf("%s ", argv[2]);
        for(i=3; i<argc; i++){
            printf("+ %s ", argv[i]);
        }

        printf("\n= %d\n",getSum(argv, argc));
    }

    if(strcmp(argv[1], "diff") == 0){
        int i;
        printf("%s ", argv[2]);
        for(i=3; i<argc; i++){
            printf("- %s ", argv[i]);
        }

        printf("\n= %d\n",getDiff(argv, argc));
    }
}

int getSum(char* num[], int n){
    int i; int ans = 0;
    for(i=2; i<n; i++){
        ans += my_atoi(num[i], 10);
    }

    return ans;
}

int getDiff(char* num[], int n){
    int i; int ans = my_atoi(num[2], 10);
    for(i=3; i<n; i++){
        ans -= my_atoi(num[i], 10);
    }

    return ans;
}

int my_atoi (char c[], int base)
{
    int i, n, count;
    n = 0;
    count = 0;
    for(i = strlen(c); i > 0; i--){  
        n = power(base, count)*(c[i-1] - '0') + n;
        count++;
    }

    return n;
}

int power (int base, int n)
{
    int i, res;
    res = 1;

    for(i=n; i>0; i--){
        res = res * base;
    }

    return res;
}