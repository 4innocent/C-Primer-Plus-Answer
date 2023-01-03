#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("input the file path: ");
    char fileName[32];
    scanf("%s", fileName);
    printf("%s\n", fileName);
    FILE* f = NULL;
    f = fopen(fileName, "r");

    char read;
    while ((read = getc(f)) != EOF) {
        putchar(read);
    }
    exit(0);
}