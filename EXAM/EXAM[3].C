#include <stdio.h>


void rev(int arr[], int size) 
{
    int sum = 0;
    printf("\n\nReversed Array:\n");
    
    for (int i = size - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\n\nSum Of All Elements: %d\n", sum);
}

void main()
{
    int size;

    
    printf("Enter The Size Of The Array: ");
    scanf("%d", &size);
	
	int arr[size];
    
    printf("\n\nEnter %d Elements Of The Array : ", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d ", &arr[i]);
    }

    
    rev(arr, size);

    
}

