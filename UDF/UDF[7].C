#include<stdio.h>

int add(int n,int sum);
int Mul(int n,int mul);

void main()
{
	int n,s,m,sum=0,mul=1;
	printf("Enter Any Number : ");
	scanf("%d",&n);
	s = add(n,sum);
	m = Mul(n,mul);
	if(s == m)
	{
		printf("%d Is Magic Number",n);
	}
	else
	{
		printf("%d Is Not Magic Number",n);	
	}
	
}

int add(int n,int sum)
{
	if(n==0)
	{
		return sum;
	}
	else
	{
		sum += n % 10;
		n /= 10;	
	}
	add(n,sum);
}

int Mul(int n,int mul)
{
	if(n==0)
	{
		return mul;
	}
	else
	{
		mul *= n % 10;
		n /= 10;
		
	}
	Mul(n,mul);
}
