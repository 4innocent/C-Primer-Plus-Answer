#include <stdio.h>

void chline(char ch, int j, int i) {
    for (int jj = 0; jj < j; jj++) {
        for (int ii = 0; ii < i; ii++) {
            putchar(ch);
        }
        printf("\n");
    }
}