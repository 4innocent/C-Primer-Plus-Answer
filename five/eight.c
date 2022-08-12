#include <stdio.h>

int main()
{
    long first;
    long second = 0;
    printf("输入第一个数：\n");
    scanf("%ld", &first);
    while (second >= 0)
    {
        printf("输入第二个数：\n");
        scanf("%ld", &second);
        if (second < 0)
            break;
        printf("%ld %% %ld = %ld. \n", second, first, second % first);
    }

    return 0;
}