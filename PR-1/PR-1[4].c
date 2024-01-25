#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter Value Of A\n : ");
	sacnf("%d",&a);
	
	printf("Enter Value Of B\n : ");
	scanf("%d",&b);
	
	a = a^b;
	b = b^a;
	a = a^b;
	
	printf("\nA\t : %d",a);
	printf("\nB\t : %d",b);
}
