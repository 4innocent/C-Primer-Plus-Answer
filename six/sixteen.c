#include <stdio.h>

int main()
{
  float init = 100;
  float daphne = 100;
  float deirdre = 100;
  int i = 1;
  for (; daphne >= deirdre; i++)
  {
    daphne += 100 * 0.1;
    deirdre += deirdre * 0.05;
  }
  printf("需要%d年。", i);
  return 0;
}