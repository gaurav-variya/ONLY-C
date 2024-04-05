#include<stdio.h>

void leapyear(int start,int end);

void main()
{
	int a,b;
	printf("Enter First Year : ");
	scanf("%d",&a);
	printf("Enter Second Year : ");
	scanf("%d",&b);
	
	printf("Leap year :");
	leapyear(a,b);
}

void leapyear(int start,int end)
{
	if(start <= end)
	{
		if( start % 4 == 0)	
		{
			printf("%d ",start);	
		}
		start++;
		leapyear(start,end);
	}
}
