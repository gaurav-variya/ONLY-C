#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,n,sum=0;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		sum += a;
	}
	
	printf("Sum of n number : %d",sum);
	
	getch();
}
