#include<stdio.h>


struct book
{
		char title;
		char author;
		int  price;	
};

main()
{
	int n;
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	printf("\n\n");
	struct book b1[n];
	
	int i;
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter Title :");
		scanf("%[^\n]",&b1[i].title);
		fflush(stdin);
		printf("Enter Author :");
		scanf("%[^\n]",&b1[i].author);
		printf("Enter Price :");
		scanf("%d",&b1[i].price);
		printf("\n\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("TITLE : %s\n",b1[i].title);
		printf("AUTHOR : %s\n",b1[i].author);
		printf("PRICE : %d\n",b1[i].price);
	}
}

