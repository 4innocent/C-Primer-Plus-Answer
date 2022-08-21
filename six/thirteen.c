#include <stdio.h>

long exps(int);

int main()
{
  long nums[8];
  int temp = 1;
  for (int i = 0; i < 8; i++)
  {
    nums[i] = exps(i);
  }
  int j = 0;
  printf("nums各元素为：");
  do
  {
    printf("%ld ", nums[j]);
    j++;
  } while (j < 8);

  return 0;
}

long exps(int a)
{
  long multi = 1;
  if (a == 0)
  {
    return multi;
  }
  else
  {
    for (int i = 1; i <= a; i++)
    {
      multi *= 2;
    }
    return multi;
  }
}