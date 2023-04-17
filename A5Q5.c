#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    int counts[26] = {0}; // initialize all counts to zero
    char ch;

    // open input file in read mode
    input_file = fopen("data.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // read each character from input file
    while ((ch = fgetc(input_file)) != EOF) {
        // convert to uppercase
        ch = toupper(ch);
        // if character is an uppercase letter, increment its count
        if (ch >= 'A' && ch <= 'Z') {
            counts[ch - 'A']++;
        }
    }

    // close input file
    fclose(input_file);

    // open output file in write mode
    output_file = fopen("statistics.txt", "w");
    if (output_file == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    // write counts to output file
    for (int i = 0; i < 26; i++) {
        fprintf(output_file, "%c: %d\n", 'A' + i, counts[i]);
    }

    // close output file
    fclose(output_file);

    printf("Statistics written to file successfully.\n");

    return 0;
}