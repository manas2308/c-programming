#include <stdio.h>

#define MAX_SIZE 100

void reverse(char *str);

int main()
{
    char str[MAX_SIZE];

    printf("Enter a string: ");
    gets(str);

    printf("Original string: %s\n", str);

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

void reverse(char *str)
{
    char *p1 = str;
    char *p2 = str;

    while (*p2) {
        p2++;
    }

    p2--;

    while (p1 < p2) {
        char temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}
