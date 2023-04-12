#include <stdio.h>
int main() {
    int N; 
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N], evenArr[N], oddArr[N];
    int evenCount = 0, oddCount = 0;

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i];
        } else {
            oddArr[oddCount++] = arr[i];
        }
    }

    printf("Even elements of the array:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    printf("Odd elements of the array:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }
    printf("\n");

    return 0;
}
