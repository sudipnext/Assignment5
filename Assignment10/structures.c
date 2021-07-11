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
// #include <stdio.h>


// struct customer
// {
//     char id[10];
//     char name[20];
//     char address[30];
//     int contact;

// };
// int main(){
//     int i, n;
//     printf("Welcome!\n");
//     printf("Specify the number of customer details you want to enter:- ");
//     scanf("%d", &n);
//     struct customer x[n];
//     for (i=0; i< n; i++){
//         printf("Enter the customer %d details\n", i+1);
//         printf("ID: ");
//         scanf("%s", x[i].id);
//         printf("NAME: ");
//         scanf("%s", x[i].name);
//         printf("ADRESS: ");
//         scanf("%s", x[i].address);
//         printf("CONTACT: ");
//         scanf("%d", &x[i].contact);
//         printf("\n");
//     }

// printf("-----------------------List of Customer details----------------------------\n");
//     for(i=0; i<n; i++){
//         printf("ID \t\t: ");
//         printf("%s \n",x[i].id);        
//         printf("NAME \t\t: ");
//         printf("%s \n",x[i].name);
//         printf("ADRESS \t\t: ");
//         printf("%s \n",x[i].address);
//         printf("CONTACT \t: ");
//         printf("%d \n",x[i].contact);
//         printf("\n");
//     }
//     return 0;
// }
// d)Item(code, name, price)
// #include <stdio.h>
// #include <stdlib.h>

// struct item
// {

//     char code[10];
//     char name[20];
//     int price;

// };
// int main(){
//     int i, n;
//     printf("Welcome!\n");
//     printf("Specify the number of item details you want to enter:- ");
//     scanf("%d", &n);
//     struct item x[n];
//     for (i=0; i< n; i++){
//         printf("Enter the item %d details\n", i+1);
//         printf("code: ");
//         scanf("%s", x[i].code);
//         printf("NAME: ");
//         scanf("%s", x[i].name);
//         printf("price: ");
//         scanf("%d", &x[i].price);
//         printf("\n");
//     }

// printf("-----------------------List of item details----------------------------\n");
//     for(i=0; i<n; i++){
//         printf("code \t\t: ");
//         printf("%s \n",x[i].code);        
//         printf("NAME \t\t: ");
//         printf("%s \n",x[i].name);
//         printf("price \t\t: ");
//         printf("%d \n",x[i].price);
//         printf("\n");
//     }
//     return 0;
// }


// e)Author(id, name, contact. Email, gender)
// #include <stdio.h>
// #include <stdlib.h>

// struct author{
//     char id[10];
//     char name[20];
//     char email[30];
//     int contact;
//     char gender[20];
// };
// int main(){
//     int i, n;
//     printf("Welcome!\n");
//     printf("Specify the number of author details you want to enter:- ");
//     scanf("%d", &n);
//     struct author x[n];
//     for (i=0; i< n; i++){
//         printf("Enter the author %d details\n", i+1);
//         printf("ID: ");
//         scanf("%s", x[i].id);
//         printf("NAME: ");
//         scanf("%s", x[i].name);
//         printf("ADRESS: ");
//         scanf("%s", x[i].email);
//         printf("CONTACT: ");
//         scanf("%d", &x[i].contact);
//         printf("gender: ");
//         scanf("%s", x[i].gender);
//     }

// printf("-----------------------List of author details----------------------------\n");
//     for(i=0; i<n; i++){
//         printf("ID \t\t: ");
//         printf("%s \n",x[i].id);        
//         printf("NAME \t\t: ");
//         printf("%s \n",x[i].name);
//         printf("EMAIL \t\t: ");
//         printf("%s \n",x[i].email);
//         printf("CONTACT \t: ");
//         printf("%d \n",x[i].contact);
//         printf("Gender \t\t: ");
//         printf("%s \n",x[i].gender);
//         printf("\n");
//     }
//     return 0;
// }

// f)Book(ISBN, title, author, category, pages)
// #include <stdio.h>
// #include <stdlib.h>

// struct author{
//     char isbn[10];
//     char title[20];
//     char author[30];
//     int pages;
//     char category[20];
// };
// int main(){
//     int i, n;
//     printf("Welcome!\n");
//     printf("Specify the number of book details you want to enter:- ");
//     scanf("%d", &n);
//     struct author x[n];
//     for (i=0; i< n; i++){
//         printf("Enter the books %d details\n", i+1);
//         printf("isbn: ");
//         scanf("%s", x[i].isbn);
//         printf("title: ");
//         scanf("%s", x[i].title);
//         printf("ADRESS: ");
//         scanf("%s", x[i].author);
//         printf("pages: ");
//         scanf("%d", &x[i].pages);
//         printf("category: ");
//         scanf("%s", x[i].category);
//     }

// printf("-----------------------List of books details----------------------------\n");
//     for(i=0; i<n; i++){
//         printf("isbn \t\t: ");
//         printf("%s \n",x[i].isbn);        
//         printf("title \t\t: ");
//         printf("%s \n",x[i].title);
//         printf("author \t\t: ");
//         printf("%s \n",x[i].author);
//         printf("pages \t: ");
//         printf("%d \n",x[i].pages);
//         printf("category \t: ");
//         printf("%s \n",x[i].category);
//         printf("\n");
//     }
//     return 0;
// }


// g)Account(id, name, acno, actype, balance)
// #include <stdio.h>
// #include <stdlib.h>

// struct account{
//     char id[10];
//     char name[20];
//     char acno[30];
//     int balance;
//     char actype[20];
// };
// int main(){
//     int i, n;
//     printf("Welcome!\n");
//     printf("Specify the number of acno details you want to enter:- ");
//     scanf("%d", &n);
//     struct account x[n];
//     for (i=0; i< n; i++){
//         printf("Enter the acno %d details\n", i+1);
//         printf("id: ");
//         scanf("%s", x[i].id);
//         printf("name: ");
//         scanf("%s", x[i].name);
//         printf("ADRESS: ");
//         scanf("%s", x[i].acno);
//         printf("balance: ");
//         scanf("%d", &x[i].balance);
//         printf("actype: ");
//         scanf("%s", x[i].actype);
//     }

// printf("-----------------------List of account details----------------------------\n");
//     for(i=0; i<n; i++){
//         printf("id \t\t: ");
//         printf("%s \n",x[i].id);        
//         printf("name \t\t: ");
//         printf("%s \n",x[i].name);
//         printf("acno \t\t: ");
//         printf("%s \n",x[i].acno);
//         printf("balance \t: ");
//         printf("%d \n",x[i].balance);
//         printf("actype \t: ");
//         printf("%s \n",x[i].actype);
//         printf("\n");
//     }
//     return 0;
// }

// h)      Point(x, y)
#include <stdio.h>
// #include <stdlib.h>

// struct account{
//     int y1;
//     int x1;
    
// };
// int main(){
//     int i, n;
//     printf("Welcome!\n");
//     printf("Specify the number of point details you want to enter:- ");
//     scanf("%d", &n);
//     struct account x[n];
//     for (i=0; i< n; i++){
//         printf("Enter the point %d details\n", i+1);
//         printf("x1: ");
//         scanf("%d", &x[i].x1);       
//         printf("y1: ");
//         scanf("%d", &x[i].y1);

//     }

// printf("-----------------------List of point details----------------------------\n");
//     for(i=0; i<n; i++){
//         printf("x1 \t: ");
//         printf("%d \n",x[i].x1);
//         printf("y1 \t\t: ");
//         printf("%d \n",x[i].y1);
//         printf("\n");
//     }
//     return 0;
// }

// 2.Define a structure name Complex having data members real & img. 
//    Write a main program to add two given complex numbers.




// 3.Define a structure name Date having data members day, month & year. 
//    Write a main program toadd two given Date.




//    4.Define a structure name Time having data members hour, minute & second. 
//    Write a main program to add two given Time.








// 5.Define a structure name Distance having data members feet & inch. 
//    Write a main program to add two given Distances .