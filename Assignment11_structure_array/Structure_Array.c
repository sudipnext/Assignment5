// Assignment 
// # 11
// Array of Structures
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

//   2.Define a structure name Employee having its member empid, name, address, and salary. 
//   WAP to read record of 10 employees and 
//   (a)Display record of all employees who live in 'DHARAN'.
//   (b)Display record of all employees who does not live in 'DHARAN'.
//   (c)Display record of all employees whose salary ranges between 15000 to 20000.
//   (d)Display record of all employees after increasing the salaries of all employees by 10%.
//   (e)Increase the salary by 10% of only those employees who lives in 'BIRATNAGAR' .
//    Display record of all employees.
//    3.Define a structure:
//    Name(fname, mname, lastname)
//    Person(age, contact, address)WAP to nest the structure Name within structure Person and read the record of 10 persons and display it
//    .4.Define a structure name Complex with its member real and img. 
//    Write a user defined function named addComplex() to add two given Complex numbers. 
//    The function should take two Complex type arguments and also return Complex type. 
//    WAP to implement the UDF in main program.
//    5.Define a structure name Time with its member hr, min and sec. Write a user defined function named timeDiff() to calculate the difference between two time periods. 
//    The function should take two Time type arguments and also return Time type. WAP to implement the UDF in main program.
//    6.Define a structure named Student having members name and rollno. WAP to read record of 10 students. 
//    Sort the students record in ascending order according to their roll numbers.