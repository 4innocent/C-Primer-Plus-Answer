#include <stdio.h>

int main()
{
  float a;
  printf("输入你的身高(英尺)：");
  scanf("%f", &a);
  printf("你的身高为(厘米): %.2f", a * 2.54);
  return 0;
}