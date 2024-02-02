#include<stdio.h>
#include<conio.h>

main()
{
	char z;
	clrscr();
	printf("Enter z :");
	scanf("%c",&z);

	if(z >= '0' && z <= '9')
	{
		printf("%c is an DIGIT",z);
	}

	else if(z >= 'a' && z <= 'z')
	{
		printf("%c is an ALPHABET",z);
	}

	else if(z >= 'A' && z <= 'Z')
	{
		printf("%c is an ALPHABET",z);
	}

	else
	{
		printf("%c is a SPRCIAL CHARACTER ",z);
	}
	getch();
}