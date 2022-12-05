#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// 缺少判断参数是否为空
int main(int argc, char *argv[])
{
  double a = atof(argv[1]);
  double b = atof(argv[2]);

  double c = pow(a, b);
  printf("%.2f", c);
  return 1;
}