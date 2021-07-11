// 5.Define a structure name Distance having data members feet & inch. 
//    Write a main program to add two given Distances .
#include<stdio.h>
struct distance
{
    int   feet, inch;
};
int main(){
    struct distance first, second, sum;
    printf("Enter 1st distance in the format   feet-inch\n");
    scanf("%d %d", &first.feet, &first.inch);
    printf("Enter 2nd distance in the format feet-inch\n");
    scanf("%d %d", &second.feet, &second.inch);

    sum.feet = first.feet + second.feet;
    sum.inch= first.inch+second.inch;
    while(sum.inch >12)
    {
        sum.inch-=12;
        sum.feet++;
    }
    printf("The final time is (%d)-(%d)", sum.feet, sum.inch);
    return 0;
    
}