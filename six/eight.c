#include <stdio.h>

int main()
{
  float a;
  float b;
  while (1)
  {
    printf("请输入两个浮点数(以,隔开)：");
    int len = scanf("%f,%f", &a, &b);
    if (len == 2)
    {
      printf("(%f)/(%f)的结果为：%.5f\n", (a - b), (a * b), (a - b) / (a * b));
    }
    else
    {
      break;
    }
  }

  return 0;
}