#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int data;

    // Open the binary file for reading
    fp = fopen("data.bin", "rb");

    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("Error: Unable to open file\n");
        return 1;
    }

    // Read the data from the file and print it to the console
    while (fread(&data, sizeof(int), 1, fp) == 1) {
        printf("%d\n", data);
    }

    // Close the file
    fclose(fp);

    return 0;
}

