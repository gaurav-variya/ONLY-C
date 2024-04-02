#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() 
{
    int A;
    int num1, num2, result;

    while (1) {
        printf("Press 1 for Addition\n");
        printf("Press 2 for Subtraction\n");
        printf("Press 3 for Multiplication\n");
        printf("Press 4 for Division\n");
        printf("Press 0 to Dxit\n\n");

        printf("Enter Your Choice: ");
        scanf("%d", &A);
        printf("\n");

        if (A == 0)
	    {
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);
        printf("\n");

        switch (A) 
		{
            case 1:
                result = add(num1, num2);
                printf("Addition of %d + %d => %d\n", num1, num2, result);
                printf("\n\n");
                break;

            case 2:
                result = subtract(num1, num2);
                printf("Subtraction of %d - %d => %d\n", num1, num2, result);
                printf("\n\n");
                break;

            case 3:
                result = multiply(num1, num2);
                printf("Multiplication of %d * %d => %d\n", num1, num2, result);
                printf("\n\n");
                break;

            case 4:
                if (num2 != 0) 
				{
                    result = divide(num1, num2);
                    printf("Division of %d / %d => %d\n", num1, num2, result);
                    printf("\n\n");
                } else 
				{
                    printf("Error: Cannot divide by zero!\n");
                }
                break;
                

            default:
                printf("Invalid input! Please enter a valid choice.\n");
                printf("\n\n");
        }
    }

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b) 
{
    return a / b;
}


