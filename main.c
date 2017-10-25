#include <stdio.h>
#include "libs/arr_util.h" 
#include "libs/sorts.h"
#include "libs/stopwatch.h"

int main(int argc, char** argv){
  
  int n = 50000;
  int* arr = i_random_arr_b(n, -10000, 10000);
  int* arr1 = copy_arr(arr, n);
  int* arr2 = copy_arr(arr, n);
  
  start();
  bubble_sort(arr, n);
  printf("%d Time for bubble sort %lld ms\n", n, time_elapsed_ms());
  
  start();
  selection_sort(arr1, n);
  printf("%d Time for selection sort %lld ms\n", n, time_elapsed_ms());
  
  start();
  insertion_sort(arr2, n);
  printf("%d Time for insertion sort %lld ms\n", n, time_elapsed_ms());
  if (is_sorted(arr2, n) == 0)
    printf("Ovaj niz je sortiran\n");
  else
     printf("Nesto ne valja\n") ;
  
  return 0;
}