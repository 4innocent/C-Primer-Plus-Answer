#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("How many words do you wish to enter?\n");
  int n;
  scanf("%d", &n);
  char tempChar[32];

  char** initStrs = (char**)malloc(sizeof(char*) * n);
  char** strs = initStrs;
  printf("Enter %d words now:\n", n);
  scanf("%*[^\n]"); // 清空输入缓冲区
  getchar(); // 清空输入缓冲区
  char temp[16]; // 临时数组存储单词，决定了程序能够处理的最长单词
  int m = n;
  int len = 0; // 单词实际长度
  // fgets读取值
  while (fgets(tempChar, 32, stdin) != NULL) {
    int i = 0, begin = 0;
    // 一次读入多个单词，每个字符循环判断
    while (i < 32) {
      // 单词总长度小于32时tempChar以\n结尾，后边的忽略，总长度大于32时，tempChar以\0结尾，此时要忽略\0
      while (tempChar[i] != ' ' && tempChar[i] != '\n' && i < 32) {
        if (tempChar[i] != '\0') {
          temp[len++] = tempChar[i];
        }
        i++;
      }
      if (i > 0) {
        // 长度大于32要考虑单词被分批读入
        if (i >= 32) {
          break;
        }
        temp[len] = '\0';
        char* str = (char*)malloc(sizeof(char) * (i - begin)); // 动态分配空间
        strncpy(str, temp, len);
        *strs++ = str; // 存储数据
        if (tempChar[i] == '\n') {
          break;
        }
        m--;
        i++;
        begin = i;
        len = 0;
      }
      else {
        break;
      }
    }
    // 以\n结尾直接结束循环, m小于0表明已经读入了指定个数的单词
    if (m <= 0 || tempChar[i] == '\n') {
      break;
    }

  }

  printf("Here are your words:\n");
  strs = initStrs;
  for (int i = 0; i < n; i++) {
    puts(*strs);
    free(*strs); // 释放空间
    strs++;
  }

  free(initStrs); // 释放空间

  return 1;
}

