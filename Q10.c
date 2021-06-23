//Wap to find the value of one number raised to the power of another using function.
#include <stdio.h>

int power_calculator(int num, int num1){
    int calc=1;
    for (int i =0; i < num1; i++){
        calc *= num;
    }
    return calc;

    
}
int main(){
    int a,b;
    printf("Enter the number first and the raised to the power second:- ");
    scanf("%d\n %d", &a, &b);
    printf("The result is %d\n", power_calculator(a, b));
    return 0;

}