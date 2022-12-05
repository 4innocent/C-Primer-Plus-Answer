#include <stdio.h>

void copy_ptrs(double *target, double *source, double *final);

int main()
{
  double a[] = {1, 2, 3, 4, 5, 6, 7, 8};
  double target[3];
  copy_ptrs(target, a + 2, a + 5);
  for (int i = 0; i < 3; i++)
  {
    printf("%f ", target[i]);
  }
  return 0;
}

void copy_ptrs(double *target, double *source, double *final)
{
  while (final != source)
  {
    *target++ = *source++;
  }
}