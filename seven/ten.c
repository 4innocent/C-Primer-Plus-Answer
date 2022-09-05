#include <stdio.h>

int main() {
    float salary = 0;
    int category = 0;
    float tax = 0;
    printf("请输入种类和应纳税收入，以,隔开：");
    scanf("%d,%f", &category, &salary);
    while (category > 0) {
        switch (category) {
        case 1:
            if (salary > 17850) {
                tax = 17850 * 0.15 + (salary - 17850) * 0.28;
            } else {
                tax = salary * 0.15;
            }
            break;
        case 2:
            if (salary > 23900) {
                tax = 23900 * 0.15 + (salary - 23900) * 0.28;
            } else {
                tax = salary * 0.15;
            }
            break;
        case 3:
            if (salary > 29750) {
                tax = 29750 * 0.15 + (salary - 29750) * 0.28;
            } else {
                tax = salary * 0.15;
            }
            break;
        case 4:
            if (salary > 14857) {
                tax = 14857 * 0.15 + (salary - 14857) * 0.28;
            } else {
                tax = salary * 0.15;
            }
            break;
        default:
            break;
        }
    }

    return 0;
}