#include <stdio.h>

int main()
{
  int nums[9];
  char lets[2] = "ab";
  for (int i = 0; i < 8; i++)
  {
    printf("请输入第%d个整数：\n", i + 1);
    scanf("%d", &nums[i]);
  }
  printf("倒序为：");
  for (int i = 7; i >= 0; i--)
  {
    printf("%d", nums[i]);
  }
}