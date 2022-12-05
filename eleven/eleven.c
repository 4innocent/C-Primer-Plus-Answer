#include <stdio.h>
#include <string.h>

int main()
{
  char str[10][32];
  char tip[][64] = {
      "打印源字符串列表",
      "以ASCII中的顺序打印字符串",
      "按长度递增顺序打印字符串",
      "按字符串中第一个单词的长度打印字符",
      "退出"};
  for (int i = 0; i < 2; i++)
  {
    fgets(str[i], 32, stdin);
    if (str[i][0] == EOF)
    {
      break;
    }
  }
  int i = 0;
  char operation;
  printf("%s", tip[i]);
  while (1)
  {
    scanf("%c", &operation);
    if (operation == 'y')
    {
      printf("%s", tip[i]);
      break;
    }
    else if (operation == 'n')
    {
      i++;
      if (i == 5)
      {
        i = 0;
      }
      printf("%s", tip[i]);
    }
  }

  return 1;
}