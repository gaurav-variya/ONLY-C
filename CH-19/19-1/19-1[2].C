#include<stdio.h>

void main()
{
	int a,b;
	int *g=&a,*v=&b;
	
	printf("Enter Value Of A : ");
	scanf("%d",&a);
	printf("Enter Value Of B : ");
	scanf("%d",&b);
	
	*g = *g + *v;
	*v = *g - *v;
	*g = *g - *v;
	
	printf("\n\nA : %d\n",a);
	printf("B : %d",b);
}
