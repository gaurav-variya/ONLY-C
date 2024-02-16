#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,n;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);
	do
	{
		if(a%2==0)
		{
			printf("%d\t",a);
	    }
	    a++;
	}while(a<=n);
	getch();
}
