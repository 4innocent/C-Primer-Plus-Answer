#include <stdio.h>

int main()
{
  char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int sum = 0;
  for (int i = 0; i < 6; i++)
  {
    sum += i;
    for (int j = sum; j <= sum + i; j++)
    {
      printf("%c", lets[j]);
    }
    printf("\n");
  }

  return 0;
}