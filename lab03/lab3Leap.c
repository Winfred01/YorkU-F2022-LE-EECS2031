/***************************************
* 22Fa - Lab03 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
****************************************/

#include <stdio.h>
int isLeap(int year);
int countDays(int month, int day, int isLeap);

int main(){
  int year,mm,dd;

  printf("Enter date ('YYYY MM DD'): ");
  scanf("%d %d %d", &year, &mm, &dd);

  while(year >= 0)
  {
    printf("%d days of year %d have elapsed", countDays(mm,dd,isLeap(year)), year);

    if(isLeap(year)) printf(" [leap year]");
    printf("\n\n");
    printf("Enter date ('YYYY MM DD'): ");
    scanf("%d %d %d", &year, &mm, &dd);
  }

  return 0;

}

int isLeap(int year){
    if(year % 4 == 0){
        if(year % 100 != 0){
            return 1;
        }
    }

    return 0;
}

int countDays(int month, int day, int isLeap){
    int mmDay[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int i, days;
    days = day;
    for (i = 0; i< month - 1; i++){
        if(i == 1 && isLeap){
            days += 29;
        }else days += mmDay[i];
    }

    return days;
}