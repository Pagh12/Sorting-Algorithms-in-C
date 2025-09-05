#include "sorts.h"

// Selection sort implementation
// Repeatedly finds the minimum element from the unsorted part
// and swaps it with the element at the current position.
void selection_sort(int *arr, size_t n) {
    // Outer loop: iterate over each position in the array
    for (size_t i = 0; i < n - 1; i++) {
        size_t min = i;  // Assume the current position has the smallest element

        // Inner loop: search for the smallest element in the unsorted part
        for (size_t j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;  // Found a smaller element, update min index
            }
        }

        // Swap the found minimum element with the current position
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
