#include<stdio.h>

main()
{
	int i,n,y1,y2;
	
	printf("Enter Year 1 : ");
	scanf("%d",&y1);
	printf("Enter Year 2 : ");
	scanf("%d",&y2);
	int a[y2];
	
	printf("\n\nLeap Years : \n");
	for(i=y1;i<=y2;i++)
	{
		if(i%4==0)
		{
			a[i]=i;
			printf("%d ",a[i]);
		}
	}
	
}
