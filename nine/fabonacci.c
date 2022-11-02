#include "custom.h"

int fabonacciResult(int n) {
    int a = 1;
    int b = 1;
    if (n == 1)
        return a;
    if (n == 2) {
        return a + b;
    }

    int temp = 0;
    while (--n >= 2) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}