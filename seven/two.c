#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {

        if (ch == '\n')
        {
            count = 0;
            continue;
        }
        else
        {
            count++;
        }

        printf("%c --- %d", ch, (int)ch);
        if (count % 8 == 0)
        {
            printf("\n");
        }
    }
}