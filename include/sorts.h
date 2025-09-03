#ifndef SORTS_H
#define SORTS_H

#include <stddef.h>  // size_t

/* Count elements of a true array (NOT a pointer). */
#define COUNT_OF(a) (sizeof(a) / sizeof((a)[0]))

/* Generic wrapper */
#define SORT_ARRAY(fn, a) (fn((a), COUNT_OF(a)))

#if defined(__GNUC__) || defined(__clang__)
  /* Avoid leading __ in user identifiers; this detects real arrays. */
  #define IS_ARRAY_(a) (!__builtin_types_compatible_p(__typeof__(a), __typeof__(&(a)[0])))

  /* Safe wrapper: compile-time error if `a` is a pointer. */
  #define SORT_ARRAY_SAFE(fn, a)                     \
    do {                                             \
      _Static_assert(IS_ARRAY_(a),                   \
        "Expected a true array, not a pointer");     \
      (fn)((a), COUNT_OF(a));                        \
    } while (0)
#else
  /* Fallback: no extra safety on non-GCC/Clang. */
  #define SORT_ARRAY_SAFE(fn, a) SORT_ARRAY(fn, a)
#endif

/* ---------- API ---------- */

/* Insertion sort: O(n^2), stable. */
void insertion_sort(int *arr, size_t n);

/* Merge sort: O(n log n), stable; uses O(n) extra space (in your VLA version). */
void merge_sort(int *arr, size_t n);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SORTS_H */
