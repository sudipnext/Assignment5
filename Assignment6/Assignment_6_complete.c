// 1.WAP to find power of any number using recursion.
#include <stdio.h>
int power(int num, int pow);

int main(){
    int x, y, result;
    printf("Enter a yourNUM (yourNUM)^(number):- ");
    scanf("%d", &x);
    printf("Enter a number to the power:- ");
    scanf("%d", &y);
    result = power(x, y);
    printf("The required ans is %d\n\n", result);
    return 0;
}



int power(int num, int pow){
    if (pow != 0){
        return (num * power(num, pow-1));

    }else{
        return 1;
    }
    

}




// 2.WAP to find the product of two given numbers using recursion.
#include <stdio.h>
int product(int x, int y);
int main(){
    int a,b,res;
    printf("Enter a first number:- ");
    scanf("%d", &a);
    printf("Enter the second number:- ");
    scanf("%d", &b);
    res = product(a, b);
    printf("The correct ans is %d\n\n", res);
    return 0;
}

int product(int x, int y){
    if (y !=0){
        return (x + product(x, y-1));
    }else{
        return 0;
    }

}





// 3.WAP to find sum of all natural numbers between 1 to n using recursion.
#include<stdio.h>
int natural(int n);
int main(){
    int x, res;
    printf("Enter the value of n:- ");
    scanf("%d", &x);
    res = natural(x);
    printf("The required sum is %d\n\n", res);
    return 0;
}
int natural(int n){
    if (n !=0){
        return (n + natural(n-1));
    }else{
        return 0;
    }
}

// 4.WAP to find reverse of any number using recursion.
#include<stdio.h>
int reverse_function(int num);
int main(){
   int num,reverse_number;
   printf("\nEnter any number:");
   scanf("%d",&num);
   reverse_number=reverse_function(num);
   printf("\nAfter reverse the no is :%d\n\n",reverse_number);
   return 0;
}
int sum=0,rem;
int reverse_function(int num){

   if(num!=0){
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else
      return sum;
   return sum;
}



// 5.WAP to find sum of digits of a given number using recursion.
// #include <stdio.h>

int sum(int, int);

int main() {
  int x,y;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("Enter another number: ");
  scanf("%d", &y);
  printf("The sum is %d.", sum(x,y));
  return 0;
}

int sum(int a, int b) {
  if(b!=0){
   return a+sum(1,b-1);
  }else{
    return 1;
  }
  
}

// 6.WAP to find factorial of any number using recursion.
#include <stdio.h>

int fac(int);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The factorial of %d is %d\n\n", n, fac(n));
  return 0;
}

int facto(int x) {
  if (x !=0 ){
      return x*fac(x-1);
  }
  return 1;
}




// 7.WAP to generate nth Fibonacci term using recursion.
#include <stdio.h>

int fibo(int);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The %dth term is %d.", n, fibo(n));
  return 0;
}

int fibo(int x) {
  if(x==0) return 0;
  else if(x==1) return 1;
  return fibo(x-1)+fibo(x-2);
}