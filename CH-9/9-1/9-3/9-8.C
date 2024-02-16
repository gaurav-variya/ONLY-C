#include<stdio.h>
#include<conio.h>

main()
{
	char a = 'A';
	clrscr();

	while(a<='Z')
		printf("%c\t",a++);
	getch();
}