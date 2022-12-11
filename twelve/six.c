#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void countStatus(int* stats, int num);

int main() {
  int* stats = (int*)malloc(10 * sizeof(int));
  time_t seconds = time(NULL);
  srand(seconds % 3600);
  for (int i = 0; i < 1000; i++) {
    countStatus(stats, rand() % 10);
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", stats[i]);
  }

  free(stats);

  return 1;
}

void countStatus(int* stats, int num) {
  stats[num]++;
}