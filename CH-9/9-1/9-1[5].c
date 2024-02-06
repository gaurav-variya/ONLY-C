#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter first year : ");
	scanf("%d",&a);
	printf("Enter first year : ");
	scanf("%d",&b);
	printf("\nLeap years :\n");

	while(a<=b)
	{
		if(a%4==0)
		{
			printf("%d\t",a);
		}
		a++;
	}
	getch();
}
