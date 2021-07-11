//    4.Define a structure name Time having data members hour, minute & second. 
//    Write a main program to add two given Time.
#include<stdio.h>
struct time
{
    int hour, minutes, seconds;
};
int main(){
    struct time first, second, sum;
    printf("Enter 1st date in the format hour-minutes-seconds\n");
    scanf("%d %d %d", &first.hour, &first.minutes, &first.seconds);
    printf("Enter 2nd date in the format hour-minutes-seconds\n");
    scanf("%d %d %d", &second.hour, &second.minutes, &second.seconds);

    sum.hour = first.hour + second.hour;
    sum.minutes= first.minutes+second.minutes;
    sum.seconds= first.seconds+second.seconds;
    while(sum.seconds > 60){
        sum.seconds-=60;
        sum.minutes++;
    }
    while(sum.minutes >60)
    {
        sum.minutes-=12;
        sum.hour++;
    }
    printf("The final time is (%d)/(%d)/(%d)", sum.hour, sum.minutes, sum.seconds);
    return 0;
    
}