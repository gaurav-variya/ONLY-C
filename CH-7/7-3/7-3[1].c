#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	//clrscr();

	printf("Enter Any Number A : ");
	scanf("%d",&a);
	printf("Enter Any Numbar B : ");
	scanf("%d",&b);
	printf("Enter Any Numbner C : ");
	scanf("%d",&c);

	(a<b)
	       ?(a<c)
			?printf("A is minimum")
			:printf("C is minimum")
	       :(b<c)
			?printf("B is minimum")
			:printf("C is minimum");
		//getch();
}
