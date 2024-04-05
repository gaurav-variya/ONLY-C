#include<stdio.h>

void main()
{
	int len=0,i;
	int *ptr;
	char name[50];
	ptr = &len;
	
	printf("Enter Any Word : ");
	scanf("%[^\n]",&name);
	
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	
	printf("Length Of String : %d",*ptr);

}
