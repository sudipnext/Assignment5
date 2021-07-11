// c)Customer(id, name, address, contact)
#include <stdio.h>


struct customer
{
    char id[10];
    char name[20];
    char address[30];
    int contact;

};
int main(){
    int i, n;
    printf("Welcome!\n");
    printf("Specify the number of customer details you want to enter:- ");
    scanf("%d", &n);
    struct customer x[n];
    for (i=0; i< n; i++){
        printf("Enter the customer %d details\n", i+1);
        printf("ID: ");
        scanf("%s", x[i].id);
        printf("NAME: ");
        scanf("%s", x[i].name);
        printf("ADRESS: ");
        scanf("%s", x[i].address);
        printf("CONTACT: ");
        scanf("%d", &x[i].contact);
        printf("\n");
    }

printf("-----------------------List of Customer details----------------------------\n");
    for(i=0; i<n; i++){
        printf("ID \t\t: ");
        printf("%s \n",x[i].id);        
        printf("NAME \t\t: ");
        printf("%s \n",x[i].name);
        printf("ADRESS \t\t: ");
        printf("%s \n",x[i].address);
        printf("CONTACT \t: ");
        printf("%d \n",x[i].contact);
        printf("\n");
    }
    return 0;
}