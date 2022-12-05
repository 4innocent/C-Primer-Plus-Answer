#include <stdio.h>

void inputArr(int rows, int cols, double arr[rows][cols]);
void printArr(int rows, int cols, double arr[rows][cols]);
double avgSingleArr(int cols, double arr[cols]);
double avgArr(int rows, int cols, double arr[rows][cols]);
double maxArr(int rows, int cols, double arr[rows][cols]);

int main()
{
  double a[3][5];
  inputArr(3, 5, a);
  for (int i = 0; i < 3; i++)
  {
    printf("single row avg num %f\n", avgSingleArr(5, a[i]));
  }
  printf("all avg %f\n", avgArr(3, 5, a));
  printf("max %f\n", maxArr(3, 5, a));
  printArr(3, 5, a);
}

// 输入数据
void inputArr(int rows, int cols, double arr[rows][cols])
{
  double num1, num2, num3, num4, num5;
  for (int i = 0; i < 3; i++)
  {
    printf("输入5个数\n");
    scanf("%lf %lf %lf %lf %lf", &num1, &num2, &num3, &num4, &num5);
    arr[i][0] = num1;
    arr[i][1] = num2;
    arr[i][2] = num3;
    arr[i][3] = num4;
    arr[i][4] = num5;
  }
}
/**
 * 打印数据
 */
void printArr(int rows, int cols, double arr[rows][cols])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%f ", arr[i][j]);
    }
    printf("\n");
  }
}
// 单行求平均值
double avgSingleArr(int cols, double *arr)
{
  double sum = 0;
  for (int i = 0; i < cols; i++)
  {
    sum += *arr++;
  }
  return sum / cols;
}

// 求整个数组平均值
double avgArr(int rows, int cols, double arr[rows][cols])
{
  double sum = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      sum += arr[i][j];
    }
  }
  return sum / (rows * cols);
}

/**
 * 寻找最大值
 */
double maxArr(int rows, int cols, double arr[rows][cols])
{
  double max = arr[0][0];
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (arr[i][j] > max)
      {
        max = arr[i][j];
      }
    }
  }
  return max;
}