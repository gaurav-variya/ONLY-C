#include<stdio.h>

main()
{
	int m,n,i;
	
	printf("Enter Array 01 size : ");
	scanf("%d",&m);
	int a[m];
	
	printf("Enter Array 02 size : ");
	scanf("%d",&n);
	int b[n],merge[m+n];
	
	printf("\n\n--|-- ARRAY-01 --|--\n\n");
	
	for(i=0;i<m;i++)
	{
		printf("Enter Array a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n--|-- ARRAY-02 --|--\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter Array b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<m;i++)
	{
		merge[i] = a[i];
	}
	
	for(i=0;i<m+n;i++)
	{
		merge[i+m] = b[i];
	}
	
	printf("\n\n--|-- MERGED ARRAY --|--\n\n");
	
	for(i=0;i<m+n;i++)
	{
		printf("Merge[%d] = %d\n",i,merge[i]);
	}
}
