#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    FILE *input_file, *output_file;
    int letter_count[ALPHABET_SIZE] = {0};
    char ch;
    
    // open input file
    input_file = fopen("data.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file.\n");
        exit(1);
    }
    
    // read input file and count occurrences of each letter
    while ((ch = fgetc(input_file)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            letter_count[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            letter_count[ch - 'A']++;
        }
    }
    
    // close input file
    fclose(input_file);
    
    // open output file
    output_file = fopen("statistics.txt", "w");
    if (output_file == NULL) {
        printf("Error opening output file.\n");
        exit(1);
    }
    
    // write letter counts to output file
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        fprintf(output_file, "%c: %d\n", 'a' + i, letter_count[i]);
    }
    
    // close output file
    fclose(output_file);
    
    return 0;
}

