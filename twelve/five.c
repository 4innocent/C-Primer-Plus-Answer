#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void quickSort(int* arr, int start, int end);

int main() {
  int nums[SIZE] = { 8,1,9,9,7,7,4,8,8,1 };
  time_t seconds = time(NULL);
  srand(seconds % 3600);
  // for (int i = 0; i < SIZE; i++) {
  //   nums[i] = rand() % 10;
  //   printf("%d ", nums[i]);
  // }
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", nums[i]);
  }
  printf("--------------\n");
  quickSort(nums, 0, SIZE - 1);
  printf("--------------\n");
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", nums[i]);
  }
}

void quickSort(int* arr, int start, int end) {
  if (start >= end)
    return;
  int pivot = start + (end - start) / 2;
  int left = start;
  int right = end;
  int temp = arr[pivot];
  while (left < right) {
    while (arr[left] < temp && left < right) {
      left++;
    }
    arr[pivot] = arr[left];
    pivot = left;
    while (temp <= arr[right] && left < right) {
      right--;
    }
    arr[pivot] = right;
    pivot = right;
  }
  arr[pivot] = temp;

  printf("%d %d %d | %d %d %d --->", start, end, pivot, arr[left], arr[right], arr[pivot]);
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  quickSort(arr, start, left - 1);
  quickSort(arr, left + 1, end);
}