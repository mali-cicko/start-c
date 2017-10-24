#include <stdio.h>
#include "libs/arr_util.h" 
#include "libs/sorts.h"
#include "libs/stopwatch.h"

int main(int argc, char** argv){
  
  int n = 15;
  int* arr = i_random_arr(15);
  
  start();
  bubble_sort(arr, n);
  printf("%d Time %lld ms\n", n, time_elapsed_ms());
  
  free(arr);
  n = 5000;
  arr = i_random_arr(n);
  
  start();
  bubble_sort(arr, n);
  printf("%d Time %lld ms\n", n, time_elapsed_ms());
  
  free(arr);
  n = 500000;
  arr = i_random_arr(n);
  
  start();
  bubble_sort(arr, n);
  printf("%d Time %lld ms\n", n, time_elapsed_ms());
    
  
  
  
  
  return 0;
}