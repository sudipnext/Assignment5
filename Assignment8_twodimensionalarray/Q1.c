// 1.WAP to read elements in an array (3x3) and calculate the sum and average of all elements.
#include <stdio.h>
int main(){
    int i,j,arr[3][3], sum=0, average;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter the elements in the array[%d],[%d] format:-", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            sum += arr[i][j];
            average = sum/9;

        }
    }
    printf("The sum and average are %d and %d respectively.", sum, average);

    return 0;
}
