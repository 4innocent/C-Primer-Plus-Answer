#include <stdio.h>

void copy_ptr(double *target, double *source, int num) {
    for (int i = 0; i < num; i++) {
        *target++ = *source++;
    }
}

int main() {
    double(*source)[5];
    double(*target)[5];
    source =
        (double[2][5]){{1.1, 2.2, 3.3, 4.4, 5.5}, {6.6, 7.7, 8.8, 9.9, 0.0}};
    double(*temp)[5];
    temp = target;
    for (int i = 0; i < 2; i++) {
        copy_ptr(*target++, *source++, 5);
    }
    for (int i = 0; i < 2; i++) {
        double *attr = *temp;
        for (int j = 0; j < 5; j++) {
            printf("%.2f ", *attr++);
        }
        temp++;
        printf("\n");
    }

    return 1;
}