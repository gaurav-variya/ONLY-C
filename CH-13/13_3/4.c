#include<stdio.h>

main()
{
	int i,j,r,c;
	
	printf("Enter Row Size : ");
	scanf("%d",&r);
	printf("Enter Column Size : ");
	scanf("%d",&c);
	int a[r][c];
	
	printf("\nEnter Array Element :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==0 || j==0 || i==r-1 || j==c-1)
			{
				printf("%d ",a[i][j]);
			}
		
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
}
