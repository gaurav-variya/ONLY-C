#include <stdio.h>

void ptr(int size)
{
	
    int arr[size][size];
    int *ptr[size][size];
    
    int i,j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            ptr[i][j] = &arr[i][j];
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("ENTER ARRAY ELEMENTS [%d][%d] : ", i, j);
            scanf("%d", &*ptr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%d ", (*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]));
        printf("\n\t\n");
    }
}

void main()
{
    int size;
    printf("Enter size of an Array : ");
    scanf("%d", &size);

    ptr(size);

    
}
