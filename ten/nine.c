#include <stdio.h>

void copyArrays(int rows, int cols, double arr[rows][cols], double target[rows][cols]);
void printArr(int rows, int cols, double arr[rows][cols]);

int main()
{
  double a[3][5] = {
      {1, 2, 3, 4, 5},
      {1, 6, 3, 4, 5},
      {1, 7, 3, 4, 5},
  };
  double target[3][5];
  copyArrays(3, 5, a, target);
  printArr(3, 5, a);
  printArr(3, 5, target);
}

void copyArrays(int rows, int cols, double arr[rows][cols], double target[rows][cols])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      target[i][j] = arr[i][j];
    }
  }
}

void printArr(int rows, int cols, double arr[rows][cols])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%.2f ", arr[i][j]);
    }
    printf("\n");
  }
}