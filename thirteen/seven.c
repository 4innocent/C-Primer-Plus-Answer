#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE* f1;
    FILE* f2;
    if ((f1 = fopen("./a.txt", "r")) == NULL || (f2 = fopen("./b.txt", "r")) == NULL) {
        fprintf(stderr, "err input");
        exit(0);
    }

    char c1, c2;
    while ((c1 = getc(f1)) != EOF && (c2 = getc(f2)) != EOF) {
        if (c1 != 10 && c2 != 10) {
            putc(c1, stdout);
            putc(c2, stdout);
            printf("\n");
        }
    }
    if (c1 == EOF) {
        while ((c2 = getc(f2)) != EOF) {
            printf("%c\n", c2);
        }
    }
    else if (c2 == EOF) {
        printf("%c\n", c1);
        while ((c1 = getc(f1)) != EOF) {
            printf("%c\n", c1);
        }
    }

    return 0;
}