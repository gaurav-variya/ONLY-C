#include<stdio.h>
#include<conio.h>
#define pi 3.14

main()

{
	float r;
	clrscr();
	printf("enter a value of radius :");
	scanf("%f",&r);

	printf("perimeter of circle : %.2f",2*pi*r);

	getch();

}