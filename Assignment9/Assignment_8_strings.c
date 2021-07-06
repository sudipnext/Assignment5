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
// #include<stdio.h>
// int main(){
//     char str1[50], str2[50];
//     int i, len=0,j;
//     printf("Enter a string1:- ");
//     scanf("%[^\n]%*c", str1);
//     printf("Enter another string2:- ");
//     scanf("%[^\n]%*c", str2);
//     for(i=0; str1[i] != '\0'; i++){
//         len++;
//     }
//     for (j=0; str2[j] != '\0'; j++){
//         str1[len] = str2[j];
//         len++;
//     }
//     str1[len] = '\0';
//     printf("\nConcated string is :%s", str1);
// 	return (0);
// }
// 5.WAP to compare two given strings without using a library function.
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   	char Str1[100], Str2[100];
//   	int result, i;
 
//   	printf("\n Please Enter the First String :  ");
//   	gets(Str1);
  	
//   	printf("\n Please Enter the Second String :  ");
//   	gets(Str2);
  	
//   	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
		   
//   	if(Str1[i] < Str2[i])
//    	{
//    		printf("\n str1 is Less than str2");
// 	}
// 	else if(Str1[i] > Str2[i])
//    	{
//    		printf("\n str2 is Less than str1");
// 	}
// 	else
//    	{
//    		printf("\n str1 is Equal to str2");
// 	}
  	
//   	return 0;
// }
// 6.WAP to convert all characters in a given string to uppercase.
// #include<stdio.h>
// int main(){
//     char str[50], cnvrtd;
//     int i;
//     printf("Enter the character you want to convert into uppercase:- ");
//     scanf("%[^\n]%*c", str);
//     for (i=0; str[i] != NULL; i++){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i]=str[i]-32;
//      }
//     }
//     printf("The conveted string is %s\n", str);
// }

// 7.WAP to find the number of vowels, consonants, digits and white spaces in a given string.
// #include <stdio.h>
// int main() {
//     char str[50];
//     int vowels, consonant, digit, space;

//     vowels = consonant = digit = space = 0;

//     printf("Enter a line of string: ");
//     gets(str);

//     for (int i = 0; str[i] != '\0'; ++i) {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
//             str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
//             str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
//             str[i] == 'U') {
//             ++vowels;
//         } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
//             ++consonant;
//         } else if (str[i] >= '0' && str[i] <= '9') {
//             ++digit;
//         } else if (str[i] == ' ') {
//             ++space;
//         }
//     }

//     printf("Vowels: %d", vowels);
//     printf("\nConsonants: %d", consonant);
//     printf("\nDigits: %d", digit);
//     printf("\nWhite spaces: %d", space);
//     return 0;
// }
// 8.WAP to count the number of words in a given line of text.
// #include<stdio.h>
// int main(){
//     char sent[100];
//     int i, c=1;
//     printf("Enter a line of text:- ");
//     gets(sent);
//     for(i=0; sent[i] != NULL; ++i){
//         if (sent[i]==' '|| sent[i] == '\t' || sent[i] == '\n' || sent[i] == '\0'){
//             ++c;
//         }
//     }
//     printf("The total no. of words in the text is %d\n", c);
//     return 0;
// }
// 9.WAP to check whether a given word is palindrome or not.
// #include <stdio.h>
// #include <string.h>
 
// int main()
// {
//   	char str[100];
//   	int i, len, a;
//   	a = 0;
//   	printf("\n Please Enter any String :  ");
//   	gets(str);
//      while (str[len] != '\0') {
//        len++;
//     }	 	   	
//   	for(i = 0; i < len; i++)
// 	{
// 		if(str[i] != str[len - i - 1])
// 		{
// 			a = 1;
// 			break;	
// 		} 
// 	}
// 	if(a == 0)
// 	{
// 		printf("\n %s is a Palindrome String", str);
// 	}
// 	else
// 	{
// 		printf("\n %s is Not a Palindrome String", str);
// 	}	
//   	return 0;
// }
 // 10.WAP to sort n number of strings in lexicographical order (dictionary order).



