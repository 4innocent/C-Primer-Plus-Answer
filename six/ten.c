#include <stdio.h>

int main()
{
  int a = 0, b = 0;
  long sum = 0;
  while (1)
  {
    sum = 0;
    printf("输入一个上限整数和一个下限整数（以,分割）：");
    int len = scanf("%d, %d", &a, &b);

    if (len == 2 && a < b)
    {
      for (; a <= b; a++)
      {
        sum += a * a;
      }
      printf("结果为：%ld\n", sum);
    }
    else
    {
      break;
    }
  }
}