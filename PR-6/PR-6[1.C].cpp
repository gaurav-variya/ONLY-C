#include<stdio.h>

main()
{
	char name[20];
	char rev[20];
	int i,l,len,a=1;
	printf("Enter Your Name : ");
	scanf("%[^\n]",&name);
	
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	
	l = len;
	len--;
	
	for(i=0;i<l;i++,len--)
	{
		rev[len-1] = name[i];
	}
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==rev[i])
		{
			a = 0;
		}	
		else
		{
			break;
		}
			
	}
	
	(a==0)
		?printf("Name Is PALINDROME!!")
		:printf("Name Is NOT PALINDROME!!");	
	
}
