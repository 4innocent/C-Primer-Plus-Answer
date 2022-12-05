#include <stdio.h>
#include <string.h>

char *findStr(char *source, char *target);

int main()
{
  char *start = findStr("abcdfes", "cdf");
  printf("%s", start);
  return 1;
}

char *findStr(char *source, char *target)
{
  int len1 = strlen(source);
  int len2 = strlen(target);
  printf("%d \n", len1);
  printf("%d \n", len2);
  char *sou = source;
  char *tar = target;
  if (len1 <= 0 || len2 <= 0)
  {
    return NULL;
  }

  for (int i = 0; i < len1;)
  {
    for (int j = 0; j < len2; j++)
    {
      if (*source != *target)
      {
        target = tar;
        break;
      }
      if (j == len2 - 1)
      {
        return source - len2 + 1;
      }
      source++;
      target++;
    }
    i++;
    source = sou + i;
  }
  return NULL;
}
