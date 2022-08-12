#include <stdio.h>
#define COUNT 60
int main()
{
    int input;
    do
    {
        scanf("%d", &input);
        printf("%d小时%d分钟\n", input / COUNT, input % COUNT);
    } while (input > 0);

    return 0;
}