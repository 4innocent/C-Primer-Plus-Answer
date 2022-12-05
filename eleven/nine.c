#include <stdio.h>
#include <string.h>

void reverseStr(char *s);

int main()
{
  char s[] = "abcdef"; // 使用指针声明的字符串存储在静态加载区，不能进行修改
  reverseStr(s);
  puts(s);
  return 1;
}

/**
 * 0 -> 5
 * 1 -> 4
 * 2 -> 3
 */
void reverseStr(char *s)
{
  int len = strlen(s);
  char temp;
  for (int i = 0; i < len / 2; i++)
  {
    temp = s[0];
    s[0] = s[len - i - 1];
    s[len - i - 1] = temp;
  }
}