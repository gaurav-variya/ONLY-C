#include<stdio.h>

main()
{
	int i,j,m,s;
	
	printf("Enter Size of Array : ");
	scanf("%d",&m);
	int a[m];
	
	for(i=0;i<m;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[i]<a[j])
			{
				s = a[i];
				a[i] = a[j];
				a[j] = s;
			}
		}
	}
	
	for(i=0;i<m;i++)
	{
		printf("\na[%d] : %d\n",i,a[i]);
	}
	
}
