#include <stdio.h>

int main() {
    int ch;
    int count = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            continue;
        } else {
            count++;
        }
    }
    printf("文本长度为%d", count);
    return 0;
}