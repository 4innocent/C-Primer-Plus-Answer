#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int myatoi(char *str)
{
  int len = strlen(str);
  int target = 0;
  char *temp = str + len - 1;
  for (int i = 0; i < len; i++)
  {
    if (!isnumber(*temp))
    {
      return 0;
    }
    else
    {
      switch (*temp)
      {
      case 48:
        target += pow(10, i) * 0;
        break;
      case 49:
        target += pow(10, i) * 1;
        break;
      case 50:
        target += pow(10, i) * 2;
        break;
      case 51:
        target += pow(10, i) * 3;
        break;
      case 52:
        target += pow(10, i) * 4;
        break;
      case 53:
        target += pow(10, i) * 5;
        break;
      case 54:
        target += pow(10, i) * 6;
        break;
      case 55:
        target += pow(10, i) * 7;
        break;
      case 56:
        target += pow(10, i) * 8;
        break;
      case 57:
        target += pow(10, i) * 9;
        break;
      default:
        break;
      }
    }
    temp--;
  }
  return target;
}

int main()
{
  int target = myatoi("1234");
  printf("%d", target);
}