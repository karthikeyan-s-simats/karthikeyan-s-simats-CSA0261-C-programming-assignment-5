#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    char filename[256];
    char search_string[256];
    char line[MAX_LINE_LENGTH];
    FILE *file;

    // Prompt the user to enter a file name and a search string
    printf("Enter the name of the file: ");
    scanf("%s", filename);
    printf("Enter the search string: ");
    scanf("%s", search_string);

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: could not open file.\n");
        return 1;
    }

    // Read the file line by line and print all lines that contain the search string
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (strstr(line, search_string) != NULL) {
            printf("%s", line);
        }
    }

    // Close the file
    fclose(file);

    return 0;
}

