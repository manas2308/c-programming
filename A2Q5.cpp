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

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N;) {
            if (arr[j] == arr[i]) {
                for (int k = j; k < N; k++) {
                    arr[k] = arr[k + 1];
                }
                N--;
            } else {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
