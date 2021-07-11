// 3.Define a structure name Date having data members day, month & year. 
//    Write a main program toadd two given Date.
#include<stdio.h>
struct name_date
{
    int day, month, year;
};
int main(){
    struct name_date first, second, sum;
    printf("Enter 1st date in the format day-month-year\n");
    scanf("%d %d %d", &first.day, &first.month, &first.year);
    printf("Enter 2nd date in the format day-month-year\n");
    scanf("%d %d %d", &second.day, &second.month, &second.year);

    sum.day = first.day + second.day;
    sum.month= first.month+second.month;
    sum.year= first.year+second.year;
    while(sum.day > 31){
        sum.day-=31;
        sum.month++;
    }
    while(sum.month >12)
    {
        sum.month-=12;
        sum.year++;
    }
    printf("The final year is (%d)/(%d)/(%d)", sum.day, sum.month, sum.year);
    return 0;
    
}