#include <stdio.h>

int main()
{
  char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("打印字符：\n");
  for (int i = 0; i <= 5; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%c", lets[5 - j]);
    }
    printf("\n");
  }

  return 0;
}