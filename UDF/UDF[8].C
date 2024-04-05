#include<stdio.h>

void alphabet(int start,int end);

main()
{
	alphabet(1,100);
}

void alphabet(int start,int end)
{
	if(start <= end)
	{
		if(start%3==0 && start%5==0)
		{
			printf("%d  ",start);	
		}
		start++;
		alphabet(start,end);	
	}
	
}
