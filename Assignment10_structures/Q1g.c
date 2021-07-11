//g)Account(id, name, acno, actype, balance)
#include <stdio.h>
  

struct account{
    char id[10];
    char name[20];
    char acno[30];
    int balance;
    char actype[20];
};
int main(){
    int i, n;
    printf("Welcome!\n");
    printf("Specify the number of acno details you want to enter:- ");
    scanf("%d", &n);
    struct account x[n];
    for (i=0; i< n; i++){
        printf("Enter the acno %d details\n", i+1);
        printf("id: ");
        scanf("%s", x[i].id);
        printf("name: ");
        scanf("%s", x[i].name);
        printf("ADRESS: ");
        scanf("%s", x[i].acno);
        printf("balance: ");
        scanf("%d", &x[i].balance);
        printf("actype: ");
        scanf("%s", x[i].actype);
    }

printf("-----------------------List of account details----------------------------\n");
    for(i=0; i<n; i++){
        printf("id \t\t: ");
        printf("%s \n",x[i].id);        
        printf("name \t\t: ");
        printf("%s \n",x[i].name);
        printf("acno \t\t: ");
        printf("%s \n",x[i].acno);
        printf("balance \t: ");
        printf("%d \n",x[i].balance);
        printf("actype \t: ");
        printf("%s \n",x[i].actype);
        printf("\n");
    }
    return 0;
}