#include <stdio.h>
#include <string.h>

void getStr(char *s)
{
  int len = strlen(s);
  char snew[len];
  char *newStr = snew;
  int i = 0;
  while (1)
  {
    if (*s != ' ')
    {
      *newStr = *s;
      newStr++;
    }
    s++;
    i++;
    if (i >= len)
    {
      *newStr = '\0';
      break;
    }
  }
  fputs(snew, stdout);
}

int main()
{
  char str[32];
  while (fgets(str, 32, stdin) != NULL)
  {
    fputs(str, stdout);
    if (strlen(str) > 1)
    {
      getStr(str);
    }
    else
    {
      break;
    }
  }

  return 1;
}