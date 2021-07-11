// h)      Point(x, y)
#include <stdio.h>
  

struct account{
    int y1;
    int x1;
    
};
int main(){
    int i, n;
    printf("Welcome!\n");
    printf("Specify the number of point details you want to enter:- ");
    scanf("%d", &n);
    struct account x[n];
    for (i=0; i< n; i++){
        printf("Enter the point %d details\n", i+1);
        printf("x1: ");
        scanf("%d", &x[i].x1);       
        printf("y1: ");
        scanf("%d", &x[i].y1);

    }

printf("-----------------------List of point details----------------------------\n");
    for(i=0; i<n; i++){
        printf("x1 \t: ");
        printf("%d \n",x[i].x1);
        printf("y1 \t\t: ");
        printf("%d \n",x[i].y1);
        printf("\n");
    }
    return 0;
}
