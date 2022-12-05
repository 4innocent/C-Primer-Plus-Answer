#include <stdio.h>
#include <string.h>

int is_within(char c, char *str);

int main()
{
  int a = is_within('a', "bbjkjkacsa");
  printf("%d", a);
  return 1;
}

int is_within(char c, char *str)
{
  int len = strlen(str);
  for (int i = 0; i < len; i++)
  {
    if (c == *str++)
    {
      return i;
    }
  }
  return 0;
}