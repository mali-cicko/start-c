#ifndef __SORTS__H__
#define __SORTS__H__


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


#endif //__SORTS__H__