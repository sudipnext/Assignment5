// 1.WAP to read 10 elements in an array and calculate the sum and average of all elements.
#include<stdio.h>
int main(){
    int arr[9];
    int sum =0;
    int average;
    for (int i =0; i< 10; i++){
        printf("Enter your %d number:-", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
        average = sum/10;
    }
    printf("The sum of array is %d and average is %d  \n", sum, average);
return 0;
}
