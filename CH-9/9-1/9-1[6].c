#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,b,mul;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&b);

	while(a<=b)
	{
		mul *= a;
		a++;
	}
	printf("\nMultiplication of N numbers : %d",mul);
	getch();
}
