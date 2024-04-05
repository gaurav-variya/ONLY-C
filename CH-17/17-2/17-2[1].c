#include<stdio.h>

int inputsize();
void inputelet(int n,int a[]);

void main()
{
	int size;
	printf("Enter Array Size : ");
	size = inputsize();
	int a[size];
	inputelet(size,a);
	printf("Sum : %d",sum(size,a));
}

int inputsize()
{
	int n;
	scanf("%d",&n);
	return n;
}

void inputelet(int n,int a[])
{
	int i;
	printf("\n\nARRAY INPUT\n");
	for(i=0;i<n;i++)
	{
		printf("Enter A[i] : ");
		scanf("%d",&a[i]);		
	}	
}

int sum(int n,int a[])
{
	int sum =0,i;
	for(i=0;i<n;i++)
	{
		sum += a[i];
	}
	return sum;
}
