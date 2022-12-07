#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void quickSort(int *arr, int len);

int main()
{
    int nums[SIZE];
    time_t seconds = time(NULL);
    srand(seconds / 3600);
    for (int i = 0; i < SIZE; i++)
    {
        nums[i] = rand() % 10;
        printf("%d ", nums[i]);
    }
    printf("--------------\n");
    quickSort(nums, SIZE);
    printf("--------------\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", nums[i]);
    }
    
}

void quickSort(int *arr, int len){
    int pivot = rand() % SIZE;
    int left = 0;
    int right = len - 1;
    if (len <= 1) return;
    
    while (left <= right)
    {
        while (arr[left] <= arr[pivot] && left <= pivot) left++;
        while(arr[pivot] < arr[right]  && right >= pivot) right--;
        printf("%d %d %d\n", left, right, pivot);
        int temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
    }
    pivot = left;

    quickSort(arr, left);
    quickSort(&arr[pivot], right - left + 1);
    
}