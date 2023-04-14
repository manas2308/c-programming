#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0}, maxFreq = 0, i, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        freq[str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > freq[maxFreq]) {
            maxFreq = i;
        }
    }

    printf("The highest frequency character in the string is '%c' with frequency %d.\n", maxFreq, freq[maxFreq]);

    return 0;
}
