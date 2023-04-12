#include <stdio.h>
int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0]; 
    int max2 = arr[1]; 
    for (int i = 1; i < N; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("The FIRST LARGEST = %d\n", max1);
    printf("THE SECOND LARGEST = %d\n", max2);

    return 0;
}
