#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int countSpace = 0;
    int countEnter = 0;
    int countLetter = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {
            countSpace++;
        }
        else if (ch == '\n')
        {
            countEnter++;
        }
        else
        {
            countLetter++;
        }
    }
    printf("空格个数为：%d, 换行符个数为：%d, 其他字符个数为：%d", countSpace, countEnter, countLetter);
}