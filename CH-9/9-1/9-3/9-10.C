#include<stdio.h>
#include<conio.h>

main()
{
	int n,rem,rev = 0;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;\
		n /= 10;
	}
	printf("Reverse : %d",rev);
	getch();
}