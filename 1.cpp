#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
    FILE *input_file, *error_file;
    char line[MAX_LINE_LENGTH];
    char *search_term = "error";

    // Open the input file for reading
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file\n");
        exit(1);
    }

    // Open the error log file for writing
    error_file = fopen("error_log.txt", "w");
    if (error_file == NULL) {
        printf("Error opening error log file\n");
        exit(1);
    }

    // Search for lines containing the search term and write them to the error log file
    while (fgets(line, MAX_LINE_LENGTH, input_file)) {
        if (strstr(line, search_term)) {
            fputs(line, error_file);
        }
    }

    // Print the contents of the error log file to the console
    printf("Error log contents:\n");
    while (fgets(line, MAX_LINE_LENGTH, error_file)) {
        printf("%s", line);
    }

    // Close the error log file
    fclose(error_file);

    return 0;
}

