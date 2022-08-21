#include <stdio.h>

int main()
{
  int a = 2147483647;
  a = a + 1;
  printf("整数上溢：%d", a);
  return 0;
}