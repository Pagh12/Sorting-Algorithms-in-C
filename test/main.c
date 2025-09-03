#include <stdio.h>
#include "sorts.h"

/* Utility to print arrays */
static void print_array(const int *arr, size_t n) {
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    /* Test insertion sort */
    int a1[] = {5, 3, 8, 4, 2};

    printf("Original (insertion): ");
    print_array(a1, COUNT_OF(a1));

    SORT_ARRAY_SAFE(insertion_sort, a1);

    printf("Sorted   (insertion): ");
    print_array(a1, COUNT_OF(a1));

    printf("\n");

    /* Test merge sort */
    int a2[] = {7, 1, 9, 3, 3, 2};

    printf("Original (merge):     ");
    print_array(a2, COUNT_OF(a2));

    SORT_ARRAY_SAFE(merge_sort, a2);

    printf("Sorted   (merge):     ");
    print_array(a2, COUNT_OF(a2));

    return 0;
}
