//wap to read a +ve integer and find the sum of digits using function.
#include <stdio.h>
int positive_sum_finder(int num){
    int reminder, sum=0;
    while (num !=0){
        reminder = num % 10;
        sum = sum + reminder;
        num /=10;
    }
    printf("The sum of digits is:- %d\n\n", sum);

}

int main(){
    int a;
    printf("Enter a +ve digit:-- ");
    scanf("%d", &a);
    positive_sum_finder(a);
    return 0;


}