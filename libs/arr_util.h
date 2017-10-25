#ifndef __ARR_UTIL__H__
#define __ARR_UTIL__H__

#include <stdio.h>
#include <stdlib.h>


// Your code
int* copy_arr(int* arr, int n) {
  int i;
  int* ret_val = (int*) malloc(n * sizeof(int));
  for (i = 0; i < n ; i++){
    ret_val[i] = arr[i];
  }
  return ret_val;
}

int* i_random_arr_b(int n, int lw, int upp) {
  int* dest = (int*) malloc(n * sizeof(int));
  int i;
  
  srand(time(NULL));
  
  if (upp < lw) {
    return NULL;
  }
  for (i = 0; i < n; i++){
    dest[i] = (rand() % (upp - lw)) + lw;
  }
  return dest;
}

int* i_random_arr(int n){
  return i_random_arr_b(n, -100, 100);
}

int is_sorted(int* arr, int n){
  int i;
  for (i = 0; i < n-1; i++){
    if (arr[i] > arr[i+1]){
      // If there is any two which breaks order
      // return fail.
      return 1;
    }
  } 
  
  // Otherwise its sorted
  return 0;  
}

void print_arr(int* arr, int n){
  int i;
  for (i = 0; i < n; i++){
    printf(" %d", arr[i]);
  }
  printf("\n");
  
}

#endif // __ARR_UTIL__H__