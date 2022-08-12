#include <stdio.h>

int main()
{
    const int TRANSFER = 100;
    float tall;
    printf("请输入你的身高！(单位: 厘米): ");
    do
    {
        scanf("%f", &tall);
        printf("身高为：%.2f(单位: 米)。\n", tall / TRANSFER);
        printf("请输入你的身高！(单位: 厘米): ");
    } while (tall > 0);

    return 0;
}