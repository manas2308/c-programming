#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int l, int r)
{
    int i;
    if (l == r) {
        printf("%s\n", str);
    }
    else {
        for (i = l; i <= r; i++) {
            swap(&str[l], &str[i]);
            permute(str, l+1, r);
            swap(&str[l], &str[i]);
        }
    }
}

int main()
{
    char str[MAX_SIZE];

    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);

    permute(str, 0, len-1);

    return 0;
}
