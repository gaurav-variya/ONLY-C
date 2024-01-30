#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter Valu Of A :");
	scanf("%d",&a);
	printf("Enter Valu Of B :");
	scanf("%d",&b);
	printf("Enter Valu Of C :");
	scanf("%d",&c);
	printf("Enter Valu Of D :");
	scanf("%d",&d);


	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d Is Maximum",a);
			}
			else
			{
				printf("%d Is Maximum",d);
			}

		}
		else
		{
			if(c>d)
			{
				printf("%d Is Maximum",c);
			}
			else
			{
				printf("%d Is Maximum",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d Is Maximum",b);
			}
			else
			{
				printf("%d Is Maximum",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d Is Maximum",c);
			}
			else
			{
				printf("%d Is Maximum",d);
			}
		}

	}

	getch();
}