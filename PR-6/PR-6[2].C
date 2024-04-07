#include<stdio.h>

main()
{
	char word[30];
	int i,j,count=1;
	
	printf("Enter Any Words : ");
	scanf("%[^\n]",&word);
	
	int n=strlen(word)
	strlwr(word);
	
	for(i=0;i<n;i++)
	{
		
		if(word[i]!='\0')
		{
			
			for(j=i+1;j<n;j++)
			{
				
				if(word[i]==word[j])
				{
					
					count++;
					word[i]='\0';
				}
				
			}
			
			printf("%c => %d\n",word[i],count);
		}
		
	}
	
}

