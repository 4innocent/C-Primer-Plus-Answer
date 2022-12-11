#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void quickSort(int* arr, int start, int end);

int main() {
  int nums[SIZE];
  time_t seconds = time(NULL);
  srand(seconds % 3600);
  for (int i = 0; i < SIZE; i++) {
    nums[i] = rand() % 10;
  }
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", nums[i]);
  }
  quickSort(nums, 0, SIZE - 1);
  printf("\n--------------\n");
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
    while (arr[left] > temp && left < right) {
      left++;
    }
    arr[pivot] = arr[left];
    pivot = left;
    while (temp >= arr[right] && left < right) {
      right--;
    }
    arr[pivot] = arr[right];
    pivot = right;
  }
  arr[pivot] = temp;

  quickSort(arr, start, left - 1);
  quickSort(arr, left + 1, end);
}