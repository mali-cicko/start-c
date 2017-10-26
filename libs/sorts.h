#ifndef __SORTS__H__
#define __SORTS__H__

/// @file sorts.h
/// @author Mali Cicko

/// @brief Implementation of various sorts in C.


// @todo Enhance sorts so they can sort everything.
// @todo Refactor code and add comments.

#include<stdlib.h>
#include<string.h>

void swap(void* first, void* second, int size){
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
void bubble_sort(void* arr, int n, int size, int (*cmp)(const void*, const void*)){
  int i, j;

  for (i = n; i >= 0; i--){
    for (j = 0; j < i; j++){
	if (cmp(arr + size*j, arr + size*(j + 1)) == 1){
	    swap(arr + size*j, arr+size*(j + 1), size);
        }
    }
  }
}


void selection_sort(void* arr, int n, int size, int (*cmp)(const void*, const void*)) {
  int i, j, min = 0;
  for (i = 0; i < n; i++){
    for (j = i; j < n; j++){
	if (cmp(arr + j * size, arr + min * size) == 1){
	  min = j;
	}
    }
    swap(arr + i*size, arr + min*size, size);

  }

}


void insertion_sort(void* arr, int n, int size, int (*cmp)(const void*, const void*)) {
    int i, j;
    char* key = (char*) malloc(size);
    for (j = 1; j < n; j++){
      memcpy(key, arr + j*size, size);
      i = j - 1;

      while((i >= 0) && (cmp(key, arr + i*size) == 1)){
	memcpy(arr + size * (i + 1), arr + size * i, size);
	i = i - 1;
      }
      memcpy(arr + size * (i + 1), key, size);
    }
}


#endif //__SORTS__H__