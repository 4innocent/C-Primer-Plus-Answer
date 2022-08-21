#include <stdio.h>

int main()
{
  float speed;
  float size;
  float time;
  printf("请输入网速（Mb/s）\n");
  scanf("%f", &speed);
  printf("请输入文件大小（MB）");
  scanf("%f", &size);
  size = size * 8;
  time = size / speed;
  printf("文件大小为：%.2f，下载速度为：%.2f，下载文件共需耗时：%.2f\n", size, speed, time);
  return 0;
}