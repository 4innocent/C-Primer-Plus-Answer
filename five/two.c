#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int hight = input + 10;
    while (input <= hight)
    {
        printf("%d ", input++);
    }
    printf("\n");
    return 0;
}