#include<stdio.h>
#include<conio.h>
#define P printf
#define G getch

main()
{
       const int a = 12,b = 6;
	

	P("Addition\t: %d + %d = %d\n",a,b,a+b);
	P("Subtraction\t: %d - %d = %d\n",a,b,a-b);
	P("Multiplication\t: %d * %d = %d\n",a,b,a*b);
	P("Division\t: %d / %d = %d\n",a,b,a/b);
	P("Modulus\t\t: %d %% %d = %d",a,b,a%b);

	G();
}
