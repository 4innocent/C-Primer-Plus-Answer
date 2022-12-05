#include <stdio.h>

double getIndent(double *arr, int len);

int main()
{
  double a[] = {1, 2, 3, 4, 5, 6, 7, 8};
  printf("indent %-5f", getIndent(a, 8));
}

double getIndent(double *arr, int len)
{
  double max = arr[0];
  double min = arr[0];
  for (int i = 0; i < len; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    if (min > arr[i])
    {
      min = arr[i];
    }
  }
  return max - min;
}