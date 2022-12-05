#include <stdio.h>

void square(int rows, int cols, int arr[rows][cols]);
void printArr(int rows, int cols, int arr[rows][cols]);

int main()
{
  int a[3][5] = {
      {1, 2, 3, 4, 5},
      {1, 2, 3, 4, 5},
      {1, 2, 3, 4, 5},
  };
  printArr(3, 5, a);
  square(3, 5, a);
  printf("平方后\n");
  printArr(3, 5, a);
  return 0;
}

void square(int rows, int cols, int arr[rows][cols])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      arr[i][j] = arr[i][j] * arr[i][j];
    }
  }
}

void printArr(int rows, int cols, int arr[rows][cols])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}