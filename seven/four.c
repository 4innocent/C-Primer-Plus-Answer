#include <stdio.h>
#define SIZE 64

int main()
{
    char letsBefore[SIZE];
    char letsAfter[SIZE];
    char ch;
    int countBefore = 0;
    int countAfter = 0;
    while ((ch = getchar()) != '#')
    {
        letsBefore[countBefore++] = ch;
        if (ch == '.')
        {
            letsAfter[countAfter++] = '!';
        }
        else if (ch == '!')
        {
            letsAfter[countAfter++] = '!';
            letsAfter[countAfter++] = '!';
        }
        else
        {
            letsAfter[countAfter++] = ch;
        }
    }

    printf("更换前：%s", letsBefore);
    printf("更换后：%s", letsAfter);
}