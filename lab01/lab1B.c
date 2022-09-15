#include <stdio.h>

main(){
    int month; int day; int year;

    printf("Enter month, day and year separated by spaces: ");

    scanf("%d %d %d", &month, &day, &year);

    printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d\n", month, day, year, year, month, day, year, month, day);
}