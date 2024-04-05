#include<stdio.h>

void check(int n);

void main()
{
	int n;
	
	printf("Enter Any Number : ");
	scanf("%d",&n);	
	
	
	check(n);
}

void check(int n)
{
	(n%3==0  &&  n%5==0)
		?printf("\n%d IS DIVISIBLE BY BOTH 3 & 5",n)
		:printf("\n%d IS NOT DIVISIBLE BY BOTH 3 & 5",n);
	
}
