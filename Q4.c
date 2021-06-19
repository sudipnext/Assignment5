//wap to read a +ve integer and find the sum of digits using function.
#include <stdio.h>

int positive_sum_finder(int num){
    int first,second, sum;
    if (num >=0){
        first = num /10;
        second = num % 10;
        sum = first + second;
        return sum;
    }

}
//INCOMPLETE
int main(){
    int a;
    printf("Enter a +ve digit");
    scanf("%d", &a);
    positive_sum_finder(a);
    return 0;


}