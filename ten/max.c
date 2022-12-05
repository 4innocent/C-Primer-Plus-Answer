#include "custom.h"
#include <stdio.h>

int max(int * arr, int len){
  int max = 0;
  for(int i = 0; i < len; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}