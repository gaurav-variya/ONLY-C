#include<stdio.h>

main()
{
	char pass[20];
	
	printf("Enter Your Password : ");
	scanf("%[^\n]",&pass);
	
	int i,n=strlen(pass),C=0,S=0,G=0,A=0;
	
	
	for(i=0;pass[i]!='\0';i++)
	{
		if(pass[i] >= 'A' && pass[i] <= 'Z')
		{
			C++;
		}
		else if(pass[i] >= 'a' && pass[i] <= 'z')				
		{
			C++;
		}
		else if(pass[i] >= '0' && pass[i] <= '9')
		{
			G++;		
		}
		else if(pass[i] >= 33 && pass[i] <= 47)
		{
			A++;			
		}
		else if(pass[i] >= 58 && pass[i] <= 64)
		{
			A++;
		}
		else if(pass[i] >= 91 && pass[i] <= 96)
		{
			A++;
		}
		else if(pass[i] >= 123 && pass[i] <= 126)
		{
			A++;
		}
		
	}
	
	((C>=1) && (S>=1) && (G>=1) && (A>=1) && (n>=6))
	
		                                                  ?printf("\n!! Your Password Is Strong !!")
		                                                  :printf("\n!! Your Password Is Not Strong !!");

}
