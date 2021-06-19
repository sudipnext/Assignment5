#include <stdio.h>

int square_number(int num){

    return num * num;
}

int main(){
    int result, a;
    printf("Enter a number:- ");
    scanf("%d", &a);
    result = square_number(a);
    printf("\nThe square of the number is %d\n", result);
    return 0;
    

}
