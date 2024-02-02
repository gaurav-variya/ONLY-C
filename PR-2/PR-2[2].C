#include<stdio.h>
#include<conio.h>

main()
{
	int  n;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);

	(n % 2 == 0)
		    ? printf("%d Is EVEN NUMBER !!",n)
		    : printf("%d Is ODD NUMBER !!",n);

	getch();
}