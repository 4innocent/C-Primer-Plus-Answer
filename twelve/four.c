#include <stdio.h>

int funcRun(void);

int main()
{
  int countFunc = 0;
  for (int i = 0; i < 20; i++)
  {
    countFunc = funcRun();
  }
  printf("%d", countFunc);
}

int funcRun()
{
  static int count = 0;
  count++;
  return count;
}