#include <stdio.h>

int main()
{
  double a[8];
  double b[8];
  for (int i = 0; i < 8; i++)
  {
    printf("输入第一个数组的第%d个元素：", i + 1);
    scanf("%lf", &a[i]);
  }

  double sum = 0;
  for (int i = 0; i < 8; i++)
  {
    sum += a[i];
    b[i] = sum;
  }

  for (int i = 0; i < 8; i++)
  {
    printf("%.2lf ", a[i]);
  }
  printf("\n");
  for (int i = 0; i < 8; i++)
  {
    printf("%.2lf ", b[i]);
  }

  return 0;
}