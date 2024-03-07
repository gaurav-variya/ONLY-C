#include<stdio.h>

main()
{
	char name[20];
	int i;
	
	printf("Enter your name : ");
	scanf("%[^\n]",&name);
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i] >= 'A' && name[i] >= 'Z')
		{
			name[i] = name[i] + 32;	
		}
		else if(name[i-1]==' ')
		{
			name[i] = name[i] - 32;
		}
	}
	printf("\nName : %s",name);
}
