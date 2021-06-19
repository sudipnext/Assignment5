//wap to reverse a given number using function
#include <stdio.h>

int reversed_num(int num){
    int reminder, reverse=0;
    while(num !=0 ){
        reminder = num % 10;
        reverse = reverse*10 + reminder;
        num /= 10;

    }
    printf("The reversed number is %d\n\n", reverse);
}
int main(){
    int a;
    printf("Enter a number you want to reverse:- ");
    scanf("%d", &a);
    reversed_num(a);
    return 0;

}