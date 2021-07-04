// Assignment # 9Strings
// 1.WAP to find the length of a given string without using a library function.
// #include<stdio.h>
// #include <string.h>
// int main(){
//     char str[50];
//     int i,leng=0;
//     printf("Enter the string:- ");
//     scanf("%c", str);
//      for (i = 1; str[i] != '\0'; i++)
//     {
//         leng++;
//     }
//     printf("The length of the string is %d\n", leng);
//     return 0;
// }
// 2.WAP to copy the content of a given string to another without using a library function.
// #include<stdio.h>
// int main(){
//     char str1[50], str2[50];
//     int i;
//     printf("Enter a string:- ");
//     scanf("%s", str1);
//     while(str1[i] != '/0'){
//         str2[i] = str1[i];
//         i++;
//     }
//     printf("The copy of the given string is %s", str2);
//     return 0;
// }
// 3.WAP to reverse a given string without using a library function.
// #include<stdio.h>

// int main() {
//    char str[100], temp;
//    int len = 0, i = 0;
//    printf("Enter a string:");
//    scanf("%[^\n]%*c", str); 
//    while (str[len] != '\0') {
//        len++;
//    }
//    len = len - 1;
//    while (i < len) {
//        temp = str[i];
//        str[i] = str[len];
//        str[len] = temp;
//        len--;
//        i++;
//    }
//    printf("After reverse:%s", str);
//    return 0;
// }
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
// 5.WAP to compare two given strings without using a library function.
// 6.WAP to convert all characters in a given string to uppercase.
// 7.WAP to find the number of vowels, consonants, digits and white spaces in a given string.
// 8.WAP to count the number of words in a given line of text.
// 9.WAP to check whether a given word is palindrome or not.
// 10.WAP to sort n number of strings in lexicographical order (dictionary order).