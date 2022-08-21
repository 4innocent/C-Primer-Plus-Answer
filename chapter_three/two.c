#include <stdio.h>

int main()
{
  short int a;
  printf("请输入一个ASCII值: ");
  scanf("%hd", &a);
  printf("输入的字符为: %c", a);
  return 0;
}