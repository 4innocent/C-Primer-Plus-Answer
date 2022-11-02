#include "charPrint.h"
#include <stdio.h>

void printChars(char c, int row, int col) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}