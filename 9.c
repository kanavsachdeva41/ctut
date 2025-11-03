// Write a simple c prorgam to print content of a file using file handling. //
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("text.txt", "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}