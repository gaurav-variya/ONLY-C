#include<stdio.h>
#include<conio.h>

main()
{
       int unit,bill;
       clrscr();
       printf("==================\n");
       printf("Enter your Electricity Unit :");
       scanf("%d",&unit);

       if(unit>=0  &&  unit<=50)
       {
	       bill = (unit+0)*0.5 +((unit+0)*0.5)*0.2;
	       printf("your BILL is %d",bill);
       }
       else if(unit>=51  &&  unit<=150)
       {
		bill= ((unit-50)*0.75+ 25) +((unit-50)*0.75)*0.2;
		printf("your BILL is %d",bill);
       }
       else if(unit>=151  &&  unit<=250)
       {
		bill=((unit-150)*1.20+25+75) +((unit-150)*1.20)*0.2;
		printf("your BILL is %d",bill);
       }
       else
       {
		 bill=((unit-250)*1.50+25+75+75) +((unit-150)*1.50)*0.2;
		 printf("your BILL is %d",bill);

       }
       getch();

}