// wap to swap two numbers using function
#include <stdio.h>
int swap(int a, int b){
    printf("After swapping it looks like this %d and %d", b, a);
}


int main(){
    int x,y, result;
    printf("Enter two numbers:- ");
    scanf("%d %d", &x, &y);
    result = swap(x, y);
    return 0;

}
