#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("Enter Valu Of A :");
	scanf("%d",&a);
	printf("Enter Valu Of B :");
	scanf("%d",&b);
	printf("Enter Valu Of C :");
	scanf("%d",&c);

	if(a<b)
	{
		if(a<c)
		{
			printf("%d Is Minimum",a);
		}
		else
		{
			printf("%d Is Minimum",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("%d Is Minimum",b);
		}
		else
		{
			printf("%d Is Minimum",c);
		}

	}

	getch();
}