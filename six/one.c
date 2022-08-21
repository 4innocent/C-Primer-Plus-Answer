#include <stdio.h>

int main()
{
  char character[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  printf("character is ");
  for (int i = 0; i < 24; i++)
  {
    printf("%c ", character[i]);
  }

  return 0;
}
