#include<stdio.h>
#include<conio.h>

main()
{
	char  a;
	clrscr();
	printf("Press S For SUNDAY\n\n");
	printf("Press M For MONDAY\n\n");
	printf("Press T For TUESDAY\n\n");
	printf("Press W For WEDNEDAY\n\n");
	printf("Press t For THURSDAY\n\n");
	printf("Press F For FRIDAY\n\n");
	printf("Press s For STURDAY\n\n");
	printf("Enter Any CHAR :");
	scanf("%c",&a);

	switch(a)
	{
		case 'S':
			 printf("\\SUNDAY\\");
			 break;

		case 'M':
			 printf("\\MONDAY\\");
			 break;

		case 'T':
			 printf("\\TUESDAY\\");
			 break;

		case 'W':
			 printf("\\WEDNEDAY\\");
			 break;

		case 't':
			 printf("\\THURSDAY\\");
			 break;

		case 'F':
			 printf("\\FRIDAY\\");
			 break;

		case 's':
			 printf("\\STURDAY\\");
			 break;
		default :
			printf("--------");

	}

	getch();
}