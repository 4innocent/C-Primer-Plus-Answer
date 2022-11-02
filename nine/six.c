#include "custom.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    double a = 5;
    double b = 8;
    double c = 2;
    swapArgs(&a, &b, &c);
    printf("%f, %f, %f", a, b, c);
    system("pause");
    return 0;
}
