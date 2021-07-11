// 4.WAP to concatenate two given strings without using a library function.
#include<stdio.h>
int main(){
    char str1[50], str2[50];
    int i, len=0,j;
    printf("Enter a string1:- ");
    scanf("%[^\n]%*c", str1);
    printf("Enter another string2:- ");
    scanf("%[^\n]%*c", str2);
    for(i=0; str1[i] != '\0'; i++){
        len++;
    }
    for (j=0; str2[j] != '\0'; j++){
        str1[len] = str2[j];
        len++;
    }
    str1[len] = '\0';
    printf("\nConcated string is :%s", str1);
	return (0);
}