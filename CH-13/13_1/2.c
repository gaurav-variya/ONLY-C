#include<stdio.h>

main()
{
	int n,i,sum=0;
	
	printf("Enter Size of Arryay : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n--|--Array--|--");
	
	for(i=0;i<n;i++)
	{
		printf("\n\na[%d] : %d\n",i,a[i]);
		sum += a[i];
	}
	
	printf("\n\nAverage of Array is : %d",sum/n);
}
