#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *arr, i, largest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n*sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed!");
        return 0;
    }

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", arr+i);
    }

    largest = *arr;
    for(i=1; i<n; i++)
    {
        if(*(arr+i) > largest)
        {
            largest = *(arr+i);
        }
    }

    printf("The largest element in the array is: %d", largest);

    free(arr);
    return 0;
}
