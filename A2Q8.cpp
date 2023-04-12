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
    int freq[N];
    for (int i = 0; i < N; i++) {
        freq[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        int count = 1;
        for (int j = i+1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        freq[i] = count;
    }
    printf("Frequency of each element:\n");
    for (int i = 0; i < N; i++) {
        if (freq[i] != -1) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
            freq[i] = -1;
        }
    }

    return 0;
}
