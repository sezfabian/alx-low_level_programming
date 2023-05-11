#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int bin_search( int *array, size_t low, size_t high, int value);

#endif /* search_algos.h*/

