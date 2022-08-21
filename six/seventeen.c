#include <stdio.h>

int main()
{
  float init = 100;
  int i = 1;
  for (; init > 0; i++)
  {
    init += init * 0.08;
    init -= 10;
  }
  printf("需要%d年", i);
  return 0;
}