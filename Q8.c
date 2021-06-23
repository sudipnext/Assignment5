//Wap to find hcf of two given numbers using function
#include <stdio.h>

int hcf_finder(int num, int num1){
  int m, n, t, hc; // variable declaration
    m = num;
    n = num1;
    while (n != 0)
    {
    t = n;
    n = m % n;
    m = t;
    }
    hc = m; // hcf
    
    printf(" The highest Common Factor = %d\n", hc);

}



int main(){
    int b, a;
    printf("Enter two numbers:- ");
    scanf("%d %d", &a, &b);
    hcf_finder(a, b);
    return 0;

}