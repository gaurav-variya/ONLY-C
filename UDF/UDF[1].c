#include<stdio.h>

int reverse(int n,int rem,int rev);

void main()
{
	int n,r;
	printf("Enter Any Number : ");
	scanf("%d",&n);	
	
	r = reverse(n,0,0);
	printf("Reverse : %d",r);
}

int reverse(int n,int rem,int rev)
{
	if(n==0)
	{
		return rev;
	}
	else
	{
		rem = n%10;
		rev = rev*10+rem;
		n/=10;
		
		reverse(n,rem,rev);
	}
}
