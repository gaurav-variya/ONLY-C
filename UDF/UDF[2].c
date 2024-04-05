#include<stdio.h>

void binary(int n,int x[],int m,int b);

void main()
{
	int n,a,m,b;
	int x[9];
	printf("Enter Any Number : ");
	scanf("%d",&n);
	binary(n,x,0,0);
}

void binary(int n,int x[],int m,int b)
{
	int i=0;
	while(n!=0)
	{
		m = n%2;
		n /= 2;

		x[i]=m;
		i++;
	}
	
	for(i=i-1;i>=0;i--)
	{
			printf("%d",x[i]);	
	}
	
}

