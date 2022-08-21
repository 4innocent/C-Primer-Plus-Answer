#include <stdio.h>

int main()
{
  int top;
  int bottom;
  printf("请输入表格的上下限(用空格隔开)：\n");
  scanf("%d %d", &top, &bottom);
  printf(" --------------------------------\n");
  printf("|%-12s|%-12s|%-12s|\n", "整数", "平方", "立方");
  printf("|--------------------------------|\n");
  for (int i = top; i <= bottom; i++)
  {
    printf("|%-10d|%-10d|%-10d|\n", i, i * i, i * i * i);
    if (i == bottom)
    {
      break;
    }
    else
    {
      printf("|--------------------------------|\n");
    }
  }
  printf(" --------------------------------\n");
  return 0;
}