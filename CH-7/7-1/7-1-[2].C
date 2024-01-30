#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);

	if(n > 0)
	{
		printf("%d is Positive Number!!",n);
	}
	else if(n < 0)
	{
		printf("%d is Nagetive Number!!",n);
	}
	else
	{
		printf("%d is Neutral  Number!!",n);
	}
	getch();
}