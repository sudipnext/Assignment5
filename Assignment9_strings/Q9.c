// 9.WAP to check whether a given word is palindrome or not.
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, len, a;
  	a = 0;
  	printf("\n Please Enter any String :  ");
  	gets(str);
     while (str[len] != '\0') {
       len++;
    }	 	   	
  	for(i = 0; i < len; i++)
	{
		if(str[i] != str[len - i - 1])
		{
			a = 1;
			break;	
		} 
	}
	if(a == 0)
	{
		printf("\n %s is a Palindrome String", str);
	}
	else
	{
		printf("\n %s is Not a Palindrome String", str);
	}	
  	return 0;
}