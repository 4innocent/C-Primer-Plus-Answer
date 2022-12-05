#include <stdio.h>
#include <string.h>

void mystrncopy(char *s1, char *s2, int n);

int main()
{
  char *source = "abcdefg";
  char target[10];
  mystrncopy(target, source, 10);
  puts(target);
  return 1;
}

void mystrncopy(char *s1, char *s2, int n)
{
  int len = strlen(s2);
  if (len >= n)
  {
    for (int i = 0; i < n; i++)
    {
      *s1++ = *s2++;
    }
  }
  else
  {
    for (int i = 0; i < len; i++)
    {
      *s1++ = *s2++;
    }
  }
}