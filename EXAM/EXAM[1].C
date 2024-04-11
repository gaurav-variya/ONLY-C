#include<stdio.h >

main()
{
    int n;

repeat :

    printf("[1]..for Addition\n");
    printf("[2]..for Subtraction\n");
    printf("[3]..for Multiplication\n");
    printf("[4]..for Division\n");
    
    printf("\nEnter your choice : ");
    scanf("%d",&n);
    
    int a,b;

    switch(n)
    {
    case 1:
        printf("\nEnter value of a : ");
        scanf("%d",&a);
        printf("Enter value of b : ");
        scanf("%d",&b);

        printf("\nAdd of %d and %d  is : %d\n\n",a,b,a+b);
        break;

    case 2:
        printf("\nEnter value of a : ");
        scanf("%d",&a);
        printf("Enter value of b : ");
        scanf("%d",&b);

        printf("\nSub of %d and %d  is : %d\n\n",a,b,a-b);
		break;

    case 3:
        printf("\nEnter value of a : ");
        scanf("%d",&a);
        printf("Enter value of b : ");
        scanf("%d",&b);

        printf("\nMul of %d and %d  is : %d\n\n",a,b,a*b);
		break;
       
    case 4:
        printf("\nEnter value of a : ");
        scanf("%d",&a);
        printf("Enter value of b : ");
        scanf("%d",&b);

        printf("\nDiv of %d and %d  is : %d\n\n",a,b,a/b);
        break;


    default:
        printf("\nPlease Enter valid input \n\n");
    
    }



}
