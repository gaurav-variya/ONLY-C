#include<stdio.h>

main()
{
	int i,j,r,c;
	float sum=0;
	
	printf("Enter Row Size : ");
	scanf("%d",&r);
	printf("Enter Column Size : ");
	scanf("%d",&c);
	int a[r][c],b[r][c],C[r][c];
	
	printf("\nEnter Array A's Element :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter Array B's Element :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j] = a[i][j] + b[i][j];
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	
}
