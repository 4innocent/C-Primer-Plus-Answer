#include <stdio.h>

int main()
{
  char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char let;
  printf("请输入一个字符（范围在A-Z之间）：");
  scanf("%c", &let);
  int layers = let - 65;
  for (int i = 0; i <= layers; i++)
  {
    // 打印前段空格
    for (int bsp = i; bsp < layers; bsp++)
    {
      printf(" ");
    }
    // 打印前段字母
    for (int bLet = 0; bLet <= i; bLet++)
    {
      printf("%c", lets[bLet]);
    }
    // 打印后段字母，注意区别
    for (int fLet = i - 1; fLet >= 0; fLet--)
    {
      printf("%c", lets[fLet]);
    }
    printf("\n");
  }

  return 0;
}