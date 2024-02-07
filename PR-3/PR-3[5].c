#include<stdio.h>
#include<conio.h>

main()
{
	int i,n=1;
	clrscr();
	
	for(i=0;i<=5;i++)
	{
		
		printf("%d,",n);
		n = (n*10)+1;	
	}


	getch();
}
