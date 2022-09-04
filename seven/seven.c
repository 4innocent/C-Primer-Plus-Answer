#include <stdio.h>

#define BASE 10
#define RATE 1.5

int main()
{
  int hours = 0;
  int salary = 0;
  int rateMoney = 0;
  printf("请输入你的工作时长：\n");
  scanf("%d", &hours);

  if (hours < 40)
  {
    salary = hours * 10;
    if (salary > 300)
    {
      rateMoney = 300 * 0.15 + (salary - 300) * 0.2;
    }
    else
    {
      rateMoney = salary * 0.15;
    }
  }
  else
  {
    hours = 40 + (hours - 40) * 1.5;
    salary = hours * 10;
    if (salary < 450)
    {
      rateMoney = 300 * 0.15 + (salary - 300) * 0.2;
    }
    else
    {
      rateMoney = 300 * 0.15 + 150 * 0.2 + (salary - 450) * 0.25;
    }
  }
  printf("工资总额为：%d，税金为：%d，净收入为：%d", salary, rateMoney, (salary - rateMoney));
  return 0;
}