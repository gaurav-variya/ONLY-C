#include<stdio.h>


main()
{

	   float base_salary,hra,da,ta;
	  
	   printf("enter value of base_salary:");
	   scanf("%f",&base_salary);
	   
	   hra+=(base_salary*10)/100;
	   da+=(base_salary*5)/100;
	   ta+=(base_salary*8)/100;
	   
	   printf("\nHRA\t: %.2f",hra);
	   printf("\nDA\t: %.2f",da);
	   printf("\nTA\t: %.2f",ta);
	   printf("\nTOTAL\t: %.2f",base_salary+hra+da+ta);
	  


}
