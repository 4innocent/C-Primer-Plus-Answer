#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* args[]) {
    // 判断参数个数是否正确
    if (argc < 3) {
        fprintf(stderr, "Useage: %s filename.", args[0]);
        exit(0);
    }
    FILE* in;
    FILE* out;
    // 尝试打开文件
    if ((in = fopen(args[1], "rb")) == NULL) {
        fprintf(stderr, "Can't open the file!");
        exit(0);
    }
    if ((out = fopen(args[2], "wb")) == NULL) {
        fprintf(stderr, "Can't open the file!");
        exit(0);
    }
    char read;
    while ((read = getc(in)) != EOF) {
        putc(read, out);
    }

    return 0;
}