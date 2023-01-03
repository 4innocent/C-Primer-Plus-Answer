#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char* in = (char*)malloc(sizeof(char) * 16);
    scanf("%s", in);
    printf("%s\n", in);
    FILE* f;
    FILE* out;
    if ((f = fopen(in, "a+")) == NULL) {
        fprintf(stderr, "err input");
        exit(0);
    }

    if ((out = fopen("_temp.txt", "w+")) == NULL) {
        fprintf(stderr, "err file");
        exit(0);
    }


    char c;
    while ((c = getc(f)) != EOF) {
        char c_ = toupper(c);
        printf("%c", c_);
        putc(c_, out);
    }
    fclose(f);
    fclose(out);

    remove(in);
    rename("./_temp.txt", "./test.txt");

    free(in);
    return 0;
}