#ifndef SEARCH_ALGOLS_H
#define SEARCH_ALGOLS_H

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
double _sqrt(double x);
int interpolation_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);
int b_search(int *array, size_t low, size_t high, int value);
int advanced_binary(int *array, size_t size, int value);
#endif /*bend if */
