// 2.Define a structure name Complex having data members real & img. 
//    Write a main program to add two given complex numbers.
#include <stdio.h>
struct complex{
    int real, img;
};
int main(){
    struct complex a, b, c;    
    printf("Enter real and img part as z= a+ib\n");
    scanf("%d%d", &a.real, &a.img);
    printf("Enter 2nd real and img part as z2= c+id\n");
    scanf("%d%d", &b.real, &b.img);
    c.real = a.real+b.real;
    c.img = a.img+b.img;
    printf("The sum of the complex number is (%d)+i(%d)\n", c.real, c.img);
    return 0;
}