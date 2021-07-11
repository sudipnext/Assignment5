// b)Employee(id, name, address, contact, doj, designation, salary)
#include <stdio.h>
  

struct employee
{
    char id[10];
    char name[20];
    char address[30];
    int contact;
    int dob;
    char designation[50];
    int salary;
};
int main(){
    int i, n;
    printf("Welcome!\n");
    printf("Specify the number of Employee details you want to enter:- ");
    scanf("%d", &n);
    struct employee x[n];
    for (i=0; i< n; i++){
        printf("Enter the employee %d details\n", i+1);
        printf("ID: ");
        scanf("%s", x[i].id);
        printf("NAME: ");
        scanf("%s", x[i].name);
        printf("ADRESS: ");
        scanf("%s", x[i].address);
        printf("CONTACT: ");
        scanf("%d", &x[i].contact);
        printf("DOB: ");
        scanf("%d", &x[i].dob);
        printf("DESIGNATION: ");
        scanf("%s", x[i].designation);
        printf("SALARY: ");
        scanf("%d", &x[i].salary);
    }

printf("-----------------------List of Employee details----------------------------\n");
    for(i=0; i<n; i++){
        printf("ID \t\t: ");
        printf("%s \n",x[i].id);        
        printf("NAME \t\t: ");
        printf("%s \n",x[i].name);
        printf("ADRESS \t\t: ");
        printf("%s \n",x[i].address);
        printf("CONTACT \t: ");
        printf("%d \n",x[i].contact);
        printf("DOB \t\t: ");
        printf("%d \n",x[i].dob);
        printf("DESIGNATION \t\t: ");
        printf("%s \n",x[i].designation);
        printf("SALARY \t\t: ");
        printf("%d \n",x[i].salary);
        printf("\n");
    }
    return 0;
}