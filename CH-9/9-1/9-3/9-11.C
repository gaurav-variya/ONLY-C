#include<stdio.h>
#include<conio.h>

main()
{
	int n,rem,rev = 0,a;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);
	a = n;

	while(n!=0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	printf("Reverse : %d",rev);
	(a == rev)
		?printf("\n%d is palindrome number",a)
		:printf("\n%d is not palindrome number",a);
	getch();
}