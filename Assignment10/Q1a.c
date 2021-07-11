// Define a structure named Person with its members:
// a)Person(name, age, address, contact)
#include <stdio.h>
  

struct person
{
    char name[20];
    int age;
    char address[30];
    int contact;
};
int main(){
    int i, n;

    
    printf("Welcome!\n");
    printf("Specify the number of Person details you want to enter:- ");
    scanf("%d", &n);
    struct person x[n];

    for (i=0; i< n; i++){
        printf("Enter the person %d details\n", i+1);
        printf("NAME: ");
        scanf("%s", x[i].name);
        printf("AGE: ");
        scanf("%d", &x[i].age);
        printf("ADRESS: ");
        scanf("%s", x[i].address);
        printf("CONTACT: ");
        scanf("%d", &x[i].contact);
    }

printf("-----------------------List of Person details----------------------------\n");
    for(i=0; i<n; i++){
        printf("NAME \t\t: ");
        printf("%s \n",x[i].name);
        printf("AGE \t\t: ");
        printf("%d \n",x[i].age);
        printf("ADDRESS \t: ");
        printf("%s \n",x[i].address);
        printf("CONTACT \t: ");
        printf("%d \n",x[i].contact);
        printf("\n");
    }
    return 0;
}