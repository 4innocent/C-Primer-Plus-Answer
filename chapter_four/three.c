#include <stdio.h>

int main()
{
  float a;
  float b;
  printf("请输入数字a：");
  scanf("%f", &a);
  printf("请输入数字b：");
  scanf("%f", &b);

  printf("a: The input is %.2f or %.1e.\n", a, a);
  printf("a: The input is %+.3f or %.3E.\n", b, b);
  return 0;
}