#include <stdio.h>


void cube(int *arr, int size) {
   
    for (int i = 0; i < size; i++)
	{
        int cube = *(arr + i) * *(arr + i) * *(arr + i);
       
        printf("CUBE Of %d is: %d\n", *(arr + i), cube);
    }
}

main() 
{
    int size;
    
    
    printf("Enter The Size Of The Array: ");
    scanf("%d", &size);
    
    int arr[size];
    
   
    printf("\n\nEnter %d Elements Of The Array\n\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    
    printf("\n\nCubes Of Array Elements\n\n");
    cube(arr, size);
    
   
}

