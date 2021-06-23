//Wap to convert decimal number to binary number using function
#include <stdio.h>

int decimal_to_binary(int a){
    int rem = 0, final=1;

    while(a > 0){
        rem += final*(a%2);
        a =a/2;
        final = final*10;
    }
    printf("The result is %d\n", rem);
    

}

int main(){
    int x;
    printf("Enter a num");
    scanf("%d", &x);
    decimal_to_binary(x);
    return 0;

}