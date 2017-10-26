#ifndef __SORTS__H__
#define __SORTS__H__

/// @file sorts.h
/// @author Mali Cicko

/// @brief Implementation of various sorts in C.


// @todo Enhance sorts so they can sort everything.
// @todo Refactor code and add comments.

#include<stdlib.h>
#include<string.h>

void swap(void* first, void* second, unsigned size){
  char* first_1 = (char*)first;
  char* second_1 = (char*)second;
  char* tmp = (char*) malloc(size);

  memcpy(tmp, first_1, size);
  memcpy(first_1, second_1, size);
  memcpy(second_1, tmp, size);

  free(tmp);

 }



// Bubble sort implementation
// @param arr - array to be sorted
// @param n   - size of array to be sorted
void bubble_sort(int* arr, int n){
  int i, j, tmp;

  for (i = n; i >= 0; i--){
    for (j = 0; j < i; j++){
	if (arr[j] > arr[j+1]){
	    swap(&arr[j], &arr[j+1], sizeof(int));
        }
    }
  }
}


void selection_sort(int* arr, int n) {
  int i, j, tmp, min = 0;
  for (i = 0; i < n; i++){
    for (j = i; j < n; j++){
	if (arr[j] < arr[min]){
	  min = j;
	}
    }
    swap(&arr[i], &arr[min], sizeof(int));

  }

}


void insertion_sort(int* arr, int n) {
    int i, j, key;
    for (j = 1; j < n; j++){
      key = arr[j];
      i = j - 1;

      while((i >= 0) && (arr[i] > key)){
	arr[i + 1] = arr[i];
	i = i - 1;
      }
      arr[i + 1] = key;
    }
}


#endif //__SORTS__H__