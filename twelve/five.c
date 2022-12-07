#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void quickSort(int* arr, int start, int end);

int main() {
  int nums[SIZE];
  time_t seconds = time(NULL);
  srand(seconds / 3600);
  for (int i = 0; i < SIZE; i++) {
    nums[i] = rand() % 10;
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
  int len = end - start + 1;
  int pivot = rand() % SIZE;
  int left = start;
  int right = end;
  int temp = arr[pivot];
  if (left >= right)
    return;
  while (left < right) {
    while (arr[left] <= temp && left < right)
      left++;
    if (left < right) {
      arr[pivot] = arr[left];
      pivot = left;
    }


    printf("%d %d %d | %d %d %d --->", left, right, pivot, arr[left], arr[right], arr[pivot]);
    for (int i = 0; i < len; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
    while (temp <= arr[right] && left < right)
      right--;
    if (left < right) {
      arr[pivot] = arr[right];
      pivot = right;
    }


    printf("%d %d %d | %d %d %d --->", left, right, pivot, arr[left], arr[right], arr[pivot]);
    for (int i = 0; i < len; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
  }
  arr[pivot] = temp;
  printf("%d %d %d | %d %d %d --->", left, right, pivot, arr[left], arr[right], arr[pivot]);
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  quickSort(arr, start, pivot);
  quickSort(arr, pivot, end);
}