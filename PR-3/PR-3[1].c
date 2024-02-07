#include<stdio.h>
#include<conio.h>
main()
{
	char latter='a';
	clrscr();
	
	do
	{
		printf("%c\t",latter);
		latter += 4;
	}while(latter <='z ');
		
	getch();
}
