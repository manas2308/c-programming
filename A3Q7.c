#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int sum = 0, i, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        sum += str[i];
    }

    printf("The sum of ASCII values of all characters in the string is %d.\n", sum);

    return 0;
}
