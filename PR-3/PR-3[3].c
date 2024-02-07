#include <stdio.h>
#include<stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;
    
	clrscr();
    printf("Enter Any Number : ");
    scanf("%d", &number);
    
    lastDigit = n % 10;
    
    while(n > 9)
    {
    	n = n / 10;
	}
   
    sum = firstDigit + lastDigit;

    printf("\Sum of the first and last digit: %d\n", sum);

	getch();    
}

