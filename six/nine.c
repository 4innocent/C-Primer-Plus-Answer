#include <stdio.h>

float complute(float a, float b);

int main()
{
  float a;
  float b;
  while (1)
  {
    printf("请输入两个浮点数：（以,分割）");
    int len = scanf("%f, %f", &a, &b);
    if (len == 2)
    {
      printf("结果为：%.5f\n", complute(a, b));
    }
    else
    {
      break;
    }
  }

  return 0;
}

float complute(float a, float b)
{
  return (a - b) / (a * b);
}