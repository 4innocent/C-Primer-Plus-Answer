#include <stdio.h>
#include <string.h>

int main()
{
  char name1[20];
  char name2[20];
  printf("请输入姓：\n");
  scanf("%s", name1);
  printf("请输入名：\n");
  scanf("%s", name2);
  int len1 = strlen(name1);
  int len2 = strlen(name2);
  printf("%s %s\n", name1, name2);
  printf("%*d %*d\n", len1, len1, len2, len2);
  printf("%s %s\n", name1, name2);
  printf("%-*d %-*d\n", len1, len1, len2, len2);
  return 0;
}