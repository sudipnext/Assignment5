//Wap to convert lowecase letter into uppercase letter
#include <stdio.h>
int lowercase_to_uppercase(char ch){
    printf("The uppercase of the letter %c is %c\n\n", ch, ch-32);
    
}

int main(){
    char a;
    printf("Enter a character you want to convert from lowercase to uppercase:-");
    scanf("%c", &a);
    lowercase_to_uppercase(a);
    return 0;

}