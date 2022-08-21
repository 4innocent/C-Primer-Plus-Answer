#include <stdio.h>
#include <float.h>

int main()
{
  double a = 1.0 / 3.0;
  float b = 1.0 / 3.0;
  printf("a = %.6f, b = %.6f\n", a, b);
  printf("a = %.12f, b = %.12f\n", a, b);
  printf("a = %.16f, b = %.16f\n", a, b);
  // FLT_DIG 表示float类型中的小数位能精确到多少位
  // DBL_DIG 表示double类型中的小数位能精确到多少位
  printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
  return 0;
}