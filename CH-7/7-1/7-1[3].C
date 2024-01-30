#include<stdio.h>
#include<conio.h>

main()
{
	char  g;
	clrscr();
	printf("Enter Any Character :");
	scanf("%c",&g);

	if(g=='a'|| g=='A'|| g=='e'|| g=='E'|| g=='i'|| g=='I'|| g=='o'|| g=='O'|| g=='u'|| g=='U')
	{
		printf("%c is Vowle!!",g);
	}
	else
	{
		printf("%c is Consonent !!",g);
	}
	getch();
}