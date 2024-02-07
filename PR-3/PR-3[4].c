#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,b=0,rem,n,x;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);
	
	x = n;
	while(n != 0)
	{
		rem = n%10;
		a *= rem;
		b += rem;
		n /= 10;
	}
	
	if(a==b)
	{
		printf("%d is a magic number",x);
	}
	else
	{
		printf("%d is not a magic number",x);
	}
	getch();
}
