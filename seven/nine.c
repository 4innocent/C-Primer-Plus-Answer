#include <math.h>
#include <stdio.h>

int IsPrime(int n) {
    int i;
    if (n % 2 == 0)
        return 0;
    for (i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int in = 0;
    printf("请输入一个正整数：");
    scanf("%d", &in);
    while (in > 0) {
        if (IsPrime(in)) {
            printf("输入是素数\n");
        } else {
            printf("输入不是素数\n");
        }
        printf("请输入一个正整数：");
        scanf("%d", &in);
    }

    return 0;
}