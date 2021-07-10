// Assignment 10

// Defining and Accessing Structure and its members.


// Define a structure named Person, Employee, Item, Account, Author, Book, Point, Customer with its members:
// a)Person(name, age, address, contact)
// #include <stdio.h>
// #include <stdlib.h>

// struct person
// {
//     char name[20];
//     int age;
//     char address[30];
//     int contact;
// };
// int main(){
//     int i, n;

    
//     printf("Welcome!\n");
//     printf("Specify the number of Person details you want to enter:- ");
//     scanf("%d", &n);
//     struct person x[n];

//     for (i=0; i< n; i++){
//         printf("Enter the person %d details\n", i+1);
//         printf("NAME: ");
//         scanf("%s", x[i].name);
//         printf("AGE: ");
//         scanf("%d", &x[i].age);
//         printf("ADRESS: ");
//         scanf("%s", x[i].address);
//         printf("CONTACT: ");
//         scanf("%d", &x[i].contact);
//     }

// printf("-----------------------List of Person details----------------------------\n");
//     for(i=0; i<n; i++){
//         printf("NAME \t\t: ");
//         printf("%s \n",x[i].name);
//         printf("AGE \t\t: ");
//         printf("%d \n",x[i].age);
//         printf("ADDRESS \t: ");
//         printf("%s \n",x[i].address);
//         printf("CONTACT \t: ");
//         printf("%d \n",x[i].contact);
//         printf("\n");
//     }
//     return 0;
// }

// b)Employee(id, name, address, contact, doj, designation, salary)
// #include <stdio.h>
// #include <stdlib.h>

// struct employee
// {
//     char id[10];
//     char name[20];
//     char address[30];
//     int contact;
//     int dob;
//     char designation[50];
//     int salary;
// };
// int main(){
//     int i, n;
//     printf("Welcome!\n");
//     printf("Specify the number of Employee details you want to enter:- ");
//     scanf("%d", &n);
//     struct employee x[n];
//     for (i=0; i< n; i++){
//         printf("Enter the employee %d details\n", i+1);
//         printf("ID: ");
//         scanf("%s", x[i].id);
//         printf("NAME: ");
//         scanf("%s", x[i].name);
//         printf("ADRESS: ");
//         scanf("%s", x[i].address);
//         printf("CONTACT: ");
//         scanf("%d", &x[i].contact);
//         printf("DOB: ");
//         scanf("%d", &x[i].dob);
//         printf("DESIGNATION: ");
//         scanf("%s", x[i].designation);
//         printf("SALARY: ");
//         scanf("%d", &x[i].salary);
//     }

// printf("-----------------------List of Employee details----------------------------\n");
//     for(i=0; i<n; i++){
//         printf("ID \t\t: ");
//         printf("%s \n",x[i].id);        
//         printf("NAME \t\t: ");
//         printf("%s \n",x[i].name);
//         printf("ADRESS \t\t: ");
//         printf("%s \n",x[i].address);
//         printf("CONTACT \t: ");
//         printf("%d \n",x[i].contact);
//         printf("DOB \t\t: ");
//         printf("%d \n",x[i].dob);
//         printf("DESIGNATION \t\t: ");
//         printf("%s \n",x[i].designation);
//         printf("SALARY \t\t: ");
//         printf("%d \n",x[i].salary);
//         printf("\n");
//     }
//     return 0;
// }
// c)Customer(id, name, address, contact)
// d)Item(code, name, price)
// e)Author(id, name, contact. Email, gender)
// f)Book(ISBN, title, author, category, pages)
// g)Account(id, name, acno, actype, balance)
// h)      Point(x, y)










// 2.Define a structure name Complex having data members real & img. 
//    Write a main program to add two given complex numbers.




// 3.Define a structure name Date having data members day, month & year. 
//    Write a main program toadd two given Date.




//    4.Define a structure name Time having data members hour, minute & second. 
//    Write a main program to add two given Time.








// 5.Define a structure name Distance having data members feet & inch. 
//    Write a main program to add two given Distances .