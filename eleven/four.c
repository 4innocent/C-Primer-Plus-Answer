#include <stdio.h>

void readLine(char *str, int len);

int main()
{
  char target[5];
  readLine(target, 5);

  printf("%-5s", target);

  return 1;
}

/**
 * 指定读入长度
 */
void readLine(char *target, int len)
{
  char in;
  int count = 0;
  int begin = 0;
  while (scanf("%c", &in) != EOF)
  {
    if (in == ' ' || in == '\t' || in == '\n')
    {
      if (begin == 0)
      {
        continue;
      }
      else
      {
        if (count < len - 1)
        {
          *target = '\0';
        }

        break;
      }
    }
    else
    {
      begin = 1;
      *target++ = in;
      count++;
      if (count >= len - 1)
      {
        *target = '\0';
        break;
      }
    }
  }
}