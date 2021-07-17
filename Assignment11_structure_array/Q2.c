//   2.Define a structure name Employee having its member empid, name, address, and salary. 
//   WAP to read record of 10 employees and 
//   (a)Display record of all employees who live in 'DHARAN'.
#include <stdio.h>
#include<string.h>
struct employee
{
    char eempid[20], name[20], address[10], place[15];
    int salary;
};

int main(){
    int n,i;
    struct employee x[n];
    for(i=0; i< 2; i++){
        printf("Enter the eempid of %d employee:- ", i+1);
        scanf("%s", x[i].eempid);
        printf("Enter the address:- ");
        scanf("%s", x[i].address);
        printf("Enter the salary ");
        scanf("%d", &x[i].salary);
    }
    printf("--------------------------------RESULT--------------------------");

    printf("ID\t\tName\t\tAddress\t\tSalary\n");
    for(j=0;j<n;j++){
        for(i=0;i<strlen(x[i].address);i++){
            if(x[i].address[i]<90)
            x[i].address[i] +=32;
        }
    }
    
    for(i=0;i<n;i++){
        if(strcmp(lower(x[i].address),"dharan")==0){
            printf("%s\t\t%s\t\t%s\t\t%.3f\n",x[i].eempid,x[i].name,x[i].address,x[i].salary);
        }
    }
    return 0;
}
char * lower(char s[]){
    int i;
    for(i=0;i<strlen(s);i++){
        if(s[i]<96)
        s[i] += 32;
    }
    return s;
}