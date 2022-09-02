#include <stdio.h>

int main()
{
    int num;
    int evenCount = 0;
    long evenSum = 0l;
    int oddCount = 0;
    long oddSum = 0l;
    do
    {
        scanf("%d", &num);
        if (num == 0)
        {
            continue;
        }

        if (num % 2 == 0)
        {
            evenCount++;
            evenSum += num;
        }
        else
        {
            oddCount++;
            oddSum += num;
        }
    } while (num != 0);
    printf("偶数个数为：%d, 平均值为：%d, 奇数个数为：%d, 平均值为：%d", evenCount, evenSum, oddCount, oddSum);
}