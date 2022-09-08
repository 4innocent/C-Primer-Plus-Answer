#include <stdio.h>

int binarySearch(int start, int end) { return start + (end - start) / 2; }

int main() {
    int start = 0;
    int end = 100;
    int target = 50;
    int ch;
    printf("请选择一个0-100的数!大输入1, 小输入2, EOF终止程序\n");
    printf("你的数是%d\n", 50);
    while ((ch = getchar()) != EOF) {
        putchar(ch);
        if (ch == '1') {
            end = target;
            target = binarySearch(start, target);
            printf("你的数是%d\n", target);
        } else if (ch == '2') {
            start = target;
            target = binarySearch(target, end);
            printf("你的数是%d\n", target);
        } else {
            break;
        }
    }

    return 0;
}