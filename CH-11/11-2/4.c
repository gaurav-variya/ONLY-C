#include<stdio.h>
#include<conio.h>

main()
{
	int s,i,j;
	//clrscr();
	
	for(i=1;i<=5;i++)
	{
		for(s=1;s<i;s++)
		{
			printf("  ");	
		}
		for(j=i;j<=5;j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
	getch();
}
