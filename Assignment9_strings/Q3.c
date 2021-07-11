// 3.WAP to reverse a given string without using a library function.
#include<stdio.h>

int main() {
   char str[100], temp;
   int len = 0, i = 0;
   printf("Enter a string:");
   scanf("%[^\n]%*c", str); 
   while (str[len] != '\0') {
       len++;
   }
   len = len - 1;
   while (i < len) {
       temp = str[i];
       str[i] = str[len];
       str[len] = temp;
       len--;
       i++;
   }
   printf("After reverse:%s", str);
   return 0;
}