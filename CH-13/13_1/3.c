#include<stdio.h>

main()
{
	int n,i;
	
	printf("Enter Size of Arryay : ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n-----------------------------");
	for(i=0;i<n;i++)
	{
		printf("Enter Value b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("\n\nC[%d] : %d\n",i,c[i]);
	}
}
