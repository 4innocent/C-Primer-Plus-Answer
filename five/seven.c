#include <stdio.h>

void printDouble(double input);

int main()
{
    double input = 0.0;
    printf("输入一个小数：\n");
    scanf("%lf", &input);
    printDouble(input);
    return 0;
}

void printDouble(double input)
{
    printf("输入数据的立方：%.3f", input * input * input);
}