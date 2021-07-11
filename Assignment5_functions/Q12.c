//WAP to check whether a number is prime or not using function.
#include <stdio.h>

int prime_checker(int);

int main() {
  int num;
  printf("Enter a number:-");
  scanf("%d", &num);
  prime_checker(num);
  return 0;
}

int prime_checker(int x) {
  for (int i=2; i<=x/2; i++) {
    if(x%i==0) {
      printf("%d is not a prime number",x);
      break;
    }
    else if (i==x/2)
     printf("%d is a prime number", x);
  }
}

