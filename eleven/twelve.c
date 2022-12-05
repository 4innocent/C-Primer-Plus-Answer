#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char str[128];
  char word[64];
  int countWord = 0;
  int countUppercase = 0;
  int countLowercase = 0;
  int countPunctuation = 0;
  int countNumber = 0;

  while (fgets(str, 128, stdin))
  {
    if (str[0] == EOF)
    {
      break;
    }
    else
    {
      int len = strlen(str);
      for (int i = 0; i < len; i++)
      {
        if (isupper(str[i]))
        {
          countUppercase++;
        }
        else if (islower(str[i]))
        {
          countLowercase++;
        }
        else if (isnumber(str[i]))
        {
          countNumber++;
        }
        else if (ispunct(str[i]))
        {
          countPunctuation++;
        }
      }
    }
  }
  printf("countUppercase: %d, countLowercase: %d, countNumber: %d, countPunctuation: %d.",
         countUppercase, countLowercase, countNumber, countPunctuation);

  return 1;
}