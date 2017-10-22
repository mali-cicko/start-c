#include <stdio.h>
#include "libs/arr_util.h" 

int main(int argc, char** argv){
  
  int n = 15;
  int* arr = i_random_arr(15);
  
  if (is_sorted(arr, n) == 0)
    printf("Sortiran\n");
  else 
    printf("Nije\n");
  
  print_arr(arr,n);
  bubble_sort(arr, n);
  
  if (is_sorted(arr, n) == 0)
    printf("Sortiran\n");
  else 
    printf("Nije\n");
  
  print_arr(arr,n);
  
  
  
  return 0;
}