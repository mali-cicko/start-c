#ifndef __SORTS__H__
#define __SORTS__H__

// Bubble sort implementation
// @param arr - array to be sorted
// @param n   - size of array to be sorted
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

void selection_sort(int* arr, int n) {
  int i, j, tmp, min = 0;
  for (i = 0; i < n; i++){
    for (j = i; j < n; j++){
	if (arr[j] < arr[min]){
	  min = j;
	}
    }
    tmp = arr[i];
    arr[i] = arr[min];
    arr[min] = tmp;
      
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