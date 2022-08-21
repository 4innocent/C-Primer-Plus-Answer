#include <stdio.h>
#include <string.h>

int main()
{
  char character[100];
  printf("请输入一个单词：");
  scanf("%s", character);
  int len = strlen(character);
  for (int i = len; i >= 0; i--)
  {
    printf("%c", character[i]);
  }

  return 0;
}