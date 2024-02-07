#include<stdio.h>
#include<conio.h>
main()
{
	int n,c=0;
	clrscr();
	printf("Enter an integer:");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		c=c+1;
	}
	printf("Total Number of Digits = %d",c);
	getch();
}
