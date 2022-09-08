#include <ctype.h>
#include <stdio.h>

int main() {
    int ch;
    int count = 0;
    while ((ch = getchar()) != EOF) {
        if (ch != ' ' && !ispunct(ch)) {
            count++;
        } else {
            if (count != 0) {
                printf("%d ", count);
            }
            count = 0;
        }
    }

    return 0;
}