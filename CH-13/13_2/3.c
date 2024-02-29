#include<stdio.h>

main()
{
	int i,s;
	
	printf("Enter Size of array : ");
	scanf("%d",&s);
	int a[s];
	
	printf("\n\n");
	for(i=0;i<s;i++)
	{
		printf("Enter Value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nThe Squares are : ");
	for(i=0;i<s;i++)
	{
		printf("%d ",a[i]*a[i]);
	}
}
