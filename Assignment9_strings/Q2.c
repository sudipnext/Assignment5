//2.WAP to copy the content of a given string to another without using a library function.
#include<stdio.h>
int main(){
    char str1[50], str2[50];
    int i;
    printf("Enter a string:- ");
    scanf("%s", str1);
    while(str1[i] != '/0'){
        str2[i] = str1[i];
        i++;
    }
    printf("The copy of the given string is %s", str2);
    return 0;
}