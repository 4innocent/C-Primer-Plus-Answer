#include <stdio.h>
#include <string.h>

int main()
{
  char init[64][16];
  char input[16];
  int i = 0;
  while (scanf("%s", input) != EOF)
  {
    char *temp = init[i];
    char *tempIn = input;
    int len = strlen(input);
    for (int j = 0; j < len; j++)
    {
      *temp++ = *tempIn++;
    }
    *temp = '\0';
    i++;
    if (i >= 64)
    {
      break;
    }
  }

  for (--i; i >= 0; i--)
  {
    printf("%s ", init[i]);
  }

  return 1;
}