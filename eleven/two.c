#include <stdio.h>

void storeStr(char *strs, int n);

int main()
{
  char strs[10];
  storeStr(strs, 10);
  for (int i = 0; i < 10; i++)
  {
    printf("%d, %c\n", i, strs[i]);
  }
  return 1;
}

void storeStr(char *strs, int n)
{
  char *temp = strs;
  int i = n;
  while (fgets(temp, 2, stdin) != NULL)
  {
    printf("%d,%c    ", i, *temp);
    if (i-- <= 2 || *temp == '\n' || *temp == ' ' || *temp == '\t')
    {
      break;
    }
    temp++;
  }
}