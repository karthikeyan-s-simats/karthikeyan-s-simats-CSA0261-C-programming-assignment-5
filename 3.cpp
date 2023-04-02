#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    FILE *fp_input, *fp_output;
    char line[MAX_LENGTH];
    char *pos;
    int index, len_red, len_blue;
    
    // open input file
    fp_input = fopen("input.txt", "r");
    if (fp_input == NULL) {
        printf("Error: Unable to open input file.\n");
        exit(1);
    }
    
    // open output file
    fp_output = fopen("output.txt", "w");
    if (fp_output == NULL) {
        printf("Error: Unable to create output file.\n");
        exit(1);
    }
    
    // get length of "red" and "blue"
    len_red = strlen("red");
    len_blue = strlen("blue");
    


    }
    
    // close files
    fclose(fp_input);
    fclose(fp_output);
    
    return 0;
}

