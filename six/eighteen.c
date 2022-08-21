#include <stdio.h>

int main()
{
  int total = 5;
  for (int i = 1; total <= 150; i++)
  {
    total -= i;
    total = total * 2;
    printf("第%d周朋友数为%d.\n", i, total);
  }

  return 0;
}