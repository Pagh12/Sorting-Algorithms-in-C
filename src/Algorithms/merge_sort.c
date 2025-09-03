#include "sorts.h"

static void merge( int *leftArray, size_t leftSize, int *rightarray, size_t rightsize, int *arr){
    size_t i = 0; 
    size_t l = 0; // left array indices
    size_t r = 0; // right array indices

    // merge conditions
    while(l < leftSize && r < rightsize ){ 
        if (leftArray[l] < rightarray[r]){
            arr[i] = leftArray[l];
            i++;
            l++;

        } 
        else{
            arr[i] = rightarray[r];
            i++;
            r++;

        }
    }
    while (l< leftSize){
        arr[i]=leftArray[l];
        i++;
        l++;

    }
    while(r < rightsize){
        arr[i]= rightarray[r];
        i++;
        r++;
    }
}

void merge_sort(int *arr, size_t n){
    
    if (n <= 1) return; //base case

    size_t middle = n / 2;
    int leftarray[middle];
    int rightarray[n - middle];

    size_t i = 0; // leftarray
    size_t j = 0; // rightarray

    for (; i < n; i++ ){
        if (i < middle){
            leftarray[i] = arr[i]; 

        }else{
            rightarray[j]= arr[i];
            j++;
        }
    }
    merge_sort(leftarray, middle);
    merge_sort(rightarray, n-middle);
    merge(leftarray,middle, rightarray, n- middle, arr);

}

