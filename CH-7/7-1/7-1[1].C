#include<stdio.h>
#include<conio.h>

main()
{
	int A,B;
	clrscr();

	printf("Enter first number : ");
	scanf("%d",&A);

	printf("Enter second numer : ");
	scanf("%d",&B);

	if(A>B)
	{
		printf("%d is minimum !!",B);

	}
	else if (A<B)
	{
		printf("%d is maximum !!",B);
	}
	else
	{
		printf("both are equal !!");
	}


	getch();

}