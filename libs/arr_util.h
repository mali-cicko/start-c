#ifndef __ARR_UTIL__H__
#define __ARR_UTIL__H__

#include <stdio.h>
#include <stdlib.h>

// Your code
int* copy_arr(int* arr, int n) {
  int i;
  int* p = (int*) malloc(n * sizeof(int));
  for (i = 0; i < n ; i++){
    p[i] = arr[i];
  }
  return p;
}

int* i_random_arr_b(int n, int lw, int upp) {
  int* p = (int*) malloc(n * sizeof(int));
  srand(time(NULL));
  int i;
  
  if (upp < lw) {
    return NULL;
  }
  for (i = 0; i < n; i++){
    p[i] = (rand() % (upp - lw)) + lw;
  }
  return p;
}

int* i_random_arr(int n){
  return i_random_arr_b(n, -100, 100);
}

int is_sorted(int* arr, int n){
  int i;
  for (i = 0; i < n-1; i++){
    if (arr[i] > arr[i+1]){
      return 1;
    }
  } 
  return 0;  
}

void print_arr(int* arr, int n){
  int i;
  for (i = 0; i < n; i++){
    printf(" %d", arr[i]);
  }
  printf("\n");
  
}

void bubble_sort(int* arr, int n){
  int i, j, tmp;
  for (i = n; i >= 0; i--){
    for (j = 0; j < i; j++){
	if (arr[j] > arr[j+1]){
	  tmp = arr[j];
	  arr[j] = arr[j+1];
	  arr[j+1] = tmp;
        }
    }
  }

}



#endif // __ARR_UTIL__H__