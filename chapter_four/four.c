#include <stdio.h>

int main()
{
  char name[20];
  printf("请输入姓名：");
  scanf("%s", name);
  printf("请输入身高(单位：厘米):");
  float tall;
  scanf("%f", &tall);
  tall = tall / 100;
  printf("%s, you are %.3f feet tall", name, tall);
  return 0;
}