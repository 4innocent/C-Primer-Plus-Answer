#include <stdio.h>

int main()
{
    char last = 32;
    char now;
    int count = 0;
    while ((now = getchar()) != '#')
    {
        if (last == 'e' && now == 'i')
        {
            count++;
        }
        else
        {
            last = now;
        }
    }
    printf("ei一共有%d个", count);
}