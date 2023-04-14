#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int freq1[256] = {0}, freq2[256] = {0}, i, len1, len2;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        freq1[str1[i]]++;
        freq2[str2[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");

    return 0;
}
