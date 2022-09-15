#include <stdio.h>

int main()
{
    int a; int b; int c;
    printf("Please enter an integer number: ");
    scanf("%d", &a); /* assign value to a */

    b = a * 2;
    c = a * 3;

    printf("Hi, you entered %d. Double and triple of %d is %d and %d, respectively.\n", a, a, b, c);
}