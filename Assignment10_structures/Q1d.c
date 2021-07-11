// d)Item(code, name, price)
#include <stdio.h>
  

struct item
{

    char code[10];
    char name[20];
    int price;

};
int main(){
    int i, n;
    printf("Welcome!\n");
    printf("Specify the number of item details you want to enter:- ");
    scanf("%d", &n);
    struct item x[n];
    for (i=0; i< n; i++){
        printf("Enter the item %d details\n", i+1);
        printf("code: ");
        scanf("%s", x[i].code);
        printf("NAME: ");
        scanf("%s", x[i].name);
        printf("price: ");
        scanf("%d", &x[i].price);
        printf("\n");
    }

printf("-----------------------List of item details----------------------------\n");
    for(i=0; i<n; i++){
        printf("code \t\t: ");
        printf("%s \n",x[i].code);        
        printf("NAME \t\t: ");
        printf("%s \n",x[i].name);
        printf("price \t\t: ");
        printf("%d \n",x[i].price);
        printf("\n");
    }
    return 0;
}
