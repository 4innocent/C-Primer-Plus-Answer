#include <stdio.h>

void sortInvert(double *arr, int len);

int main()
{
  double a[] = {1, 2, 3, 10, 7, 8};
  sortInvert(a, 6);
  for (int i = 0; i < 6; i++)
  {
    printf("%f ", a[i]);
  }
}

void sortInvert(double *arr, int len)
{
  double temp = 0;
  for (int i = 0; i < len / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[len - i - 1];
    arr[len - i - 1] = temp;
  }
}