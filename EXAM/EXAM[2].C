#include <stdio.h>


int Sum(int arr[], int size) 
{
    int sum = 0;
    
    for (int i = 0; i < size; i++) 
	{
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int size;

   
    printf("Enter Size Of The Array: ");
    scanf("%d", &size);
	
	int arr[size];
    
    printf("Enter %d Elements Of The Array : ", size);
    
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }

   
    int sum = Sum(arr, size);

    
    printf("The Sum Of Elements In The Array Is: %d\n", sum);

    return 0;
}

