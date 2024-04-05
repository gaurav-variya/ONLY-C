#include<stdio.h>

void cube(int n);

void main()
{
	int n;
	
	printf("Enter Any Number\t: ");
	scanf("%d",&n);	
	cube(n);
}

void cube(int n)
{
	printf("\nCUBE OF %d\t : %d",n,n*n*n);
}
