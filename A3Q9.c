#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int i, n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    int *p1 = arr1;
    int *p2 = arr2;

    for (i = 0; i < n; i++) {
        *(p2 + i) = *(p1 + i);
    }

    printf("Elements of original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nElements of new array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
