#include <stdio.h>
#define SIZE 5

void copy_attr(double target[], double source[], int num);
void copy_ptr(double *target, double *source, int num);
void copy_ptrs(double *target, double *source, double *final);
void printAttr(double *target, int num);

int main() {
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];
    copy_attr(target1, source, SIZE);
    copy_ptr(target2, source, SIZE);
    copy_ptrs(target3, source, source + SIZE);

    printAttr(target1, SIZE);
    printAttr(target2, SIZE);
    printAttr(target3, SIZE);
    return 1;
}

void copy_attr(double target[], double source[], int num) {
    for (int i = 0; i < num; i++) {
        target[i] = source[i];
    }
}

void copy_ptr(double *target, double *source, int num) {
    for (int i = 0; i < num; i++) {
        *target++ = *source++;
    }
}

void copy_ptrs(double *target, double *source, double *final) {
    while (final != source) {
        *target++ = *source++;
    }
}

void printAttr(double *target, int num) {
    for (int i = 0; i < num; i++) {
        // 注意*target++和*target + i的区别
        printf("%.2f ", *target++);
    }
    printf("\n");
}