#include<stdio.h>

main()
{

	int a,b,c;

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b:  ");
	scanf("%d",&b);

	c = a;
	a = b;
	b = c;

	printf("a\t: %d\nb\t: %d\n",a,b);

	
}
