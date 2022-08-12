#include <stdio.h>

int main()
{
    int days;
    printf("请输入天数：\n");
    scanf("%d", &days);
    int sum = 0;
    while (days > 0)
    {
        sum += days * days;
        days--;
    }
    printf("%d天共赚取%d元!", days, sum);
    return 0;
}