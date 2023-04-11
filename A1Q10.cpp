#include <stdio.h>

int main() {
    int decimal, binary = 0, base = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        rem = decimal % 2;
        binary += rem * base;
        decimal /= 2;
        base *= 10;
    }

    printf("Binary equivalent: %d", binary);

    return 0;
}