//wap to find LCF of two given numbers using function
#include <stdio.h>

int lcf_calcuator(int num, int num1){
    int t, x, y, lc, hc;
    x = num;
    y = num1;
    while(y != 0){
        t = y;
        y = x % y;
        x = t;
    }
    hc = x;
    lc = (num*num1)/hc;
    printf("The required LCF is :- %d", lc);

}

int main(){
    int a,b;
    printf("Enter two numbers:- ");
    scanf("%d\n %d", &a, &b);
    lcf_calcuator(a, b);
    return 0;

}