//Wap to check a given number is even or odd using the function.
#include <stdio.h>

int even_odd_checker(int num){
    if (num % 2 == 0){
        printf("Its Even number!\n");
    }else{
        printf("It's odd number!\n");
    }
}

int main(){
    int a;
    printf("Enter a number:-");
    scanf("%d", &a);
    even_odd_checker(a);
    return 0;

}