#include<stdio.h>

main()
{
	char name[20];
	
	printf("enter your name : ");
	scanf("%[^\n]",&name);
	
	int i;
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i] >= 'A' && name[i] <= 'Z')
		{
			name[i] = name[i] + 32;
		}
	}
	
	printf("name : %s\n",name);
	
}
