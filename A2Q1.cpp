#include <stdio.h>

int main() {
    int Arr[5] = {12, 56, 34, 78, 100};
    int N = 5;
    int i, max;

    max = Arr[0]; // initialize max with first element of the array

    for (i = 1; i < N; i++) {
        if (Arr[i] > max) {
            max = Arr[i]; // update max if a larger element is found
        }
    }

    printf("Largest element in the array is: %d\n", max);

    return 0;
}
