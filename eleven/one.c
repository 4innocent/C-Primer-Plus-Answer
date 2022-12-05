#include <stdio.h>

void storeStr(char *strs, int n);

int main()
{
  char strs[10];
  storeStr(strs, 10);
  for (int i = 0; i < 10; i++)
  {
    printf("%c", strs[i]);
  }
}

void storeStr(char *strs, int n)
{
  char *temp = strs;
  int i = n;
  while (fgets(temp, i, stdin) != NULL)
  {
    while (i-- > 0)
    {
      if (*temp++ == '\n')
        break;
    }
  }
}