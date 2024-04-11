#include<stdio.h>

main()
{
	int n;
	int a,b;
	
	printf("press 1 for ADDITION\n");
	printf("press 2 for SUBTRACTION\n");
	printf("press 3 for MULTIPLICTION\n");
	printf("press 4 for DIVISION\n");
	printf("\n\nEnter Your Number : ");
	scanf("%d",&n);
	
	printf("\nEnter Value  Of A : ");
	scanf("%d",&a);
	printf("\nEnter Value Of  B : ");
	scanf("%d",&b);
		
	printf("\n\n");
	switch(n)
			{
				case 1:
						printf("ADDITION : %d and %d = %d",a,b,a+b);
						break;
				case 2:
						printf("SUBTRACTION : %d and %d = %d",a,b,a-b);
						break;
				case 3:
						printf("MULTIPLICTION : %d and %d = %d",a,b,a*b);
						break;
				case 4:
						printf("DIVISION : %d and %d = %d",a,b,a/b);
						break;
			}
			
			

}
