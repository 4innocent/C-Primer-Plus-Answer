#include <stdio.h>

int get_index(double *arr, int len);

int main()
{
  double a[] = {1.0, 2, 3, 4, 5, 6, 3, 2, 1};
  int maxIndex = get_index(a, 9);
  printf("max index %d, max is %f", maxIndex, a[maxIndex]);
}

int get_index(double *arr, int len)
{
  double max = 0;
  int maxIndex = -1;
  for (int i = 0; i < len; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      maxIndex = i;
    }
  }
  return maxIndex;
}