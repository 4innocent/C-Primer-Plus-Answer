#include <stdio.h>

float first(float limit);
float second(float limit);

int main()
{
  float limit1;
  float limit2;
  while (1)
  {
    printf("输入两个正整数值（用,隔开）：");
    int len = scanf("%f, %f", &limit1, &limit2);
    if (len != 2 || limit1 < 0 || limit2 < 0)
      break;
    float sum1 = first(limit1);
    float sum2 = second(limit2);
    printf("sum1为：%f, sum2为%f\n", sum1, sum2);
  }
}

float first(float limit)
{
  float sum = 0.0;
  for (float i = 1; i < limit; i++)
  {
    sum += 1.0 / i;
  }
  return sum;
}

float second(float limit)
{
  float sum = 0.0;
  int sign = -1;
  for (float i = 2; i < limit; i++)
  {
    sign = sign * -1;
    sum += sign * 1.0 / i;
  }
  return sum;
}