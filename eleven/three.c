#include <stdio.h>

char *readWord(char *source, char *target);

int main()
{
  char str[] = "   abcdef";
  char target[10];
  readWord(str, target);
  fputs(target, stdout);
}

char *readWord(char *source, char *target)
{
  char *s = target;
  int start = 0;

  while (source != NULL && *source != '\0')
  {
    if (*source == ' ' || *source == '\t' || *source == '\n')
    {
      if (start)
        break;
      source++;
      continue;
    }
    else
    {
      if (start == 0)
        start = 1;
      *s++ = *source++;
    }
  }
  *s = '\0';

  return target;
}