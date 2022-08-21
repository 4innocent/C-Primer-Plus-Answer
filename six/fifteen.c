#include <stdio.h>
#include <string.h>

int main()
{
  char str[255];
  printf("输入一行字符,长度不超过255（按回车键结束）：");
  scanf("%s", str);
  int len = strlen(str);
  for (int i = len - 1; i >= 0; i--)
  {
    printf("%c", str[i]);
  }

  return 0;
}