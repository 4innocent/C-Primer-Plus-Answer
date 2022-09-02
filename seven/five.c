#include <stdio.h>

int main()
{
    const int SIZE = 32;
    char letsBefore[SIZE];
    char letsAfter[SIZE];
    char ch;
    int countBefore = 0;
    int countAfter = 0;
    while ((ch = getchar()) != '#')
    {
        letsBefore[countBefore++] = ch;
        switch (ch)
        {
        case '.':
            letsAfter[countAfter++] = '!';
            break;
        case '!':
            letsAfter[countAfter++] = '!';
            letsAfter[countAfter++] = '!';
            break;
        default:
            letsAfter[countAfter++] = ch;
            break;
        }
    }

    printf("更换前：%s", letsBefore);
    printf("更换后：%s", letsAfter);
}