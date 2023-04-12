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
    int temp;
    for (int i = 0; i < N/2; i++) {
        temp = arr[i];
        arr[i] = arr[N-1-i];
        arr[N-1-i] = temp;
    }
    printf("Reversed array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int isPalindrome = 1;
    for (int i = 0; i < N/2; i++) {
        if (arr[i] != arr[N-1-i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
    return 0;
}
