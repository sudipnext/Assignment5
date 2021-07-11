// 1.WAP to find the length of a given string without using a library function.
#include<stdio.h>
#include <string.h>
int main(){
    char str[50];
    int i,leng=0;
    printf("Enter the string:- ");
    scanf("%c", str);
     for (i = 1; str[i] != '\0'; i++)
    {
        leng++;
    }
    printf("The length of the string is %d\n", leng);
    return 0;
}