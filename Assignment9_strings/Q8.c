// 8.WAP to count the number of words in a given line of text.
#include<stdio.h>
int main(){
    char sent[100];
    int i, c=1;
    printf("Enter a line of text:- ");
    gets(sent);
    for(i=0; sent[i] != NULL; ++i){
        if (sent[i]==' '|| sent[i] == '\t' || sent[i] == '\n' || sent[i] == '\0'){
            ++c;
        }
    }
    printf("The total no. of words in the text is %d\n", c);
    return 0;
}