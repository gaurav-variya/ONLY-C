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
		else if(name[0]>='a' && name[0]<='z')
		{
			name[0] = name[0] -32;
		}
	}
	
	printf("name : %s\n",name);
	
}
