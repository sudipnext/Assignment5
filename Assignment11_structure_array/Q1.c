// 1.Define a structure named Student having members name, rollno and marks in 5 subjects.
//  WAPto read record of 10 students.
//   Calculate total marks and percentage of each student and print them.
#include <stdio.h>
struct student
{
    char name[20], rollno[10];
    int marks[5];
    float total;
};
int main(){
    int n,j,i;
    struct student x[n];
    for(i=0; i< 10; i++){
        printf("Enter the name of %d student:- ", i+1);
        scanf("%s", x[i].name);
        printf("Enter the roll no:- ");
        scanf("%s", x[i].rollno);
        for (j=0; j<5; j++){
            printf("Enter the marks obtained on %d subject", j+1);
            scanf("%d", &x[i].marks[j]);
            x[i].total+=x[i].marks[j];
        }
    }
    printf("--------------------------------RESULT--------------------------");
    for(i=0; i<10; i++){
        printf("Student %d\n", i+1);
        printf("Name: %s\n", x[i].name);
        printf("Roll no: %s\n", x[i].rollno);
        printf("Total marks: %.2f\n", x[i].total);
        printf("Percentage: %.2f\n", (x[i].total/500)*100);
    }
    return 0;
}