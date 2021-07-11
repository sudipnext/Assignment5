// 6.WAP to convert all characters in a given string to uppercase.
#include<stdio.h>
int main(){
    char str[50], cnvrtd;
    int i;
    printf("Enter the character you want to convert into uppercase:- ");
    scanf("%[^\n]%*c", str);
    for (i=0; str[i] != NULL; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
     }
    }
    printf("The conveted string is %s\n", str);
// }