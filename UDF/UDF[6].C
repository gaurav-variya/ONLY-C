#include<stdio.h>

void largenum(int i,int n,int a[],int size);

void main()
{
	int i,size,n;
	printf("Enter Array Size : ");
	scanf("%d",&size);
	int a[size];
	
	printf("\n\n--ARRAY INPUT--\n");
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	largenum(i,n,a,size);
}

void largenum(int i,int n,int a[],int size)
{
	n = a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>n)
		{
			n = a[i];
		}
	}
	
	printf("\nLargest Element : %d",n);
}
