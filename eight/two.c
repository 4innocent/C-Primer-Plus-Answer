#include <stdio.h>

int main() {
    int ch;
    int count = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            continue;
        } else {
            printf("%c,%d ", ch, ch);
            count++;
        }

        if (count % 10 == 0) {
            printf("\n");
            count = 0;
        }
    }

    return 0;
}
