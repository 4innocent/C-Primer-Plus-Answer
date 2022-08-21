#include <stdio.h>

int main()
{
  char name[4];
  char ming[12];
  printf("请输入姓：\n");
  scanf("%s", name);
  printf("请输入名字\n");
  scanf("%s", ming);

  printf("姓为：%s，名：%s", name, ming);
  return 0;
}