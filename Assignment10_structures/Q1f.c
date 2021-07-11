// f)Book(ISBN, title, author, category, pages)
#include <stdio.h>
  

struct author{
    char isbn[10];
    char title[20];
    char author[30];
    int pages;
    char category[20];
};
int main(){
    int i, n;
    printf("Welcome!\n");
    printf("Specify the number of book details you want to enter:- ");
    scanf("%d", &n);
    struct author x[n];
    for (i=0; i< n; i++){
        printf("Enter the books %d details\n", i+1);
        printf("isbn: ");
        scanf("%s", x[i].isbn);
        printf("title: ");
        scanf("%s", x[i].title);
        printf("ADRESS: ");
        scanf("%s", x[i].author);
        printf("pages: ");
        scanf("%d", &x[i].pages);
        printf("category: ");
        scanf("%s", x[i].category);
    }
printf("-----------------------List of books details----------------------------\n");
    for(i=0; i<n; i++){
        printf("isbn \t\t: ");
        printf("%s \n",x[i].isbn);        
        printf("title \t\t: ");
        printf("%s \n",x[i].title);
        printf("author \t\t: ");
        printf("%s \n",x[i].author);
        printf("pages \t: ");
        printf("%d \n",x[i].pages);
        printf("category \t: ");
        printf("%s \n",x[i].category);
        printf("\n");
    }
    return 0;
}