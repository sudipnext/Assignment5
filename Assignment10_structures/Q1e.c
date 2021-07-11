// e)Author(id, name, contact. Email, gender)
#include <stdio.h>
  

struct author{
    char id[10];
    char name[20];
    char email[30];
    int contact;
    char gender[20];
};
int main(){
    int i, n;
    printf("Welcome!\n");
    printf("Specify the number of author details you want to enter:- ");
    scanf("%d", &n);
    struct author x[n];
    for (i=0; i< n; i++){
        printf("Enter the author %d details\n", i+1);
        printf("ID: ");
        scanf("%s", x[i].id);
        printf("NAME: ");
        scanf("%s", x[i].name);
        printf("ADRESS: ");
        scanf("%s", x[i].email);
        printf("CONTACT: ");
        scanf("%d", &x[i].contact);
        printf("gender: ");
        scanf("%s", x[i].gender);
    }

printf("-----------------------List of author details----------------------------\n");
    for(i=0; i<n; i++){
        printf("ID \t\t: ");
        printf("%s \n",x[i].id);        
        printf("NAME \t\t: ");
        printf("%s \n",x[i].name);
        printf("EMAIL \t\t: ");
        printf("%s \n",x[i].email);
        printf("CONTACT \t: ");
        printf("%d \n",x[i].contact);
        printf("Gender \t\t: ");
        printf("%s \n",x[i].gender);
        printf("\n");
    }
    return 0;
}