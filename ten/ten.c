#include <stdio.h>

void addToThirdArr(int cols, int arr1[cols], int arr2[cols], int arr3[cols]);

int main()
{
  int a1[4] = {2, 4, 5, 8};
  int a2[4] = {1, 0, 4, 6};
  int a3[4];
  addToThirdArr(4, a1, a2, a3);
  for (int i = 0; i < 4; i++)
  {
    printf("%d ", a3[i]);
  }

  return 0;
}

void addToThirdArr(int cols, int arr1[cols], int arr2[cols], int arr3[cols])
{
  for (int i = 0; i < cols; i++)
  {
    *arr3++ = *arr1++ + *arr2++;
  }
}