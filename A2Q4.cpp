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

    int maxDiff = arr[1] - arr[0];
    int minElement = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] - minElement > maxDiff) {
            maxDiff = arr[i] - minElement;
        }

        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    printf("The maximum difference between two elements in the array is %d\n", maxDiff);

    return 0;
}
