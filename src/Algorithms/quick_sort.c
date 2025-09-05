#include "sorts.h"


void quick_sort(int *arr, size_t n){
    if (n <= 1) return; // base case
    size_t i=0; 

    int pivot = arr[n - 1];

    //partition loop
    for (size_t j = 0; j < n - 1; j++) {
        if (arr[j] < pivot) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    
    // Place pivot in correct position
    int temp = arr[i];
    arr[i] = arr[n - 1];
    arr[n - 1] = temp;

    quick_sort(arr, i);                 // left side (elements < pivot)
    quick_sort(arr + i + 1, n - i - 1); // right side (elements > pivot)
}
