#include <stdio.h>
#include <string.h>

int main()
{
  char name[12];
  printf("请输入名字：");
  scanf("%s", name);
  printf("名字是：\"%s\"\n", name);
  printf("\"%20s\"\n", name);
  printf("\"%-20s\"\n", name);
  int len = strlen(name);
  printf("%*s", len + 3, name); // *表示待输入参数
  return 0;
}