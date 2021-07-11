//Wap to find the factorial of a given number using function

#include <stdio.h>
int factorial_finder(int num){
    int a=1;
    for(int i =1; i<=num; i++){
        a *= i;
   
     }
    printf("The factorial of the number:- %d\n", a);
}


int main(){
    int x;
    printf("Enter a number:- ");
    scanf("%d", &x);
    factorial_finder(x);
    return 0;


}