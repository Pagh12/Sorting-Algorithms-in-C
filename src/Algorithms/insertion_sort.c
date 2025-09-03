#include "sorts.h"


void insertion_sort(int *arr, size_t n) {
    if(!arr || n < 2 ){
        return;
    }

    /* find temp*/
    for(size_t i = 0; i < n; i ++){
        int temp = arr[i];

        size_t j = i;
        /*shift forward*/
        while (j > 0 && arr[j-1] > temp){
           arr[j] = arr[j-1]; 
           --j; 
        }
        /* place found*/
        arr[j] = temp;
    } 
}
