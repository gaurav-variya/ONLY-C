#include <stdio.h>


struct Book 
{
    char title[100];
    char author[100];
    int price;
};

void main() 
{
   
    int n;

    printf("Enter The Number Of Books : ");
    scanf("%d", &n);

  
    struct Book books[n];

  
    for (int i = 0; i < n; i++) 
	{
        printf("\n\nEnter details of Book %d\n\n", i + 1);
        printf(" Enter Title: ");
        scanf("%s", books[i].title);
        printf("Enter Author: ");
        scanf("%s", books[i].author);
        printf("Enter Price: ");
        scanf("%d", &books[i].price);
    }

  
    printf("\n\nDetails of the %d books\n\n", n);
    
    for (int i = 0; i < n; i++) 
	{
        printf("\n\nBook %d\n\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %d\n", books[i].price);
    }

   
}

