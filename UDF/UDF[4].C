#include<stdio.h>

void alphabet(char start,char end);

main()
{
	alphabet('A','Z');
}

void alphabet(char start,char end)
{
	if(start <= end)
	{
		printf("%c   ",start);
		start++;
		alphabet(start,end);
	}
}
