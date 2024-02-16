#include<stdio.h>
#include<conio.h>

main()
{
	int  a = 1,n;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);

	while(a<=10)
		printf("%d * %d = %d\n",n,a++,n*a);
	getch();
}