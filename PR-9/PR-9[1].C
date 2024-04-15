#include<stdio.h>

main()
{
	FILE *even,*odd;
	
	even = fopen("EVEN NUMBER .txt","w");
	odd = fopen("ODD NUMBER .txt","w");
	
	fprintf(even,"EVEN NUMBERS BETWEEN 50 TO 70 : ");
	fprintf(odd,"ODD NUMBERS BETWEEN 50 TO 70 : ");
	int i;
	
	for(i=51;i<=70;i++)
	{
		(i % 2 == 0)
			?fprintf(even,"%d,",i)
			:fprintf(odd,"%d,",i);
	}
	
	fclose(even);
	fclose(odd);
}
