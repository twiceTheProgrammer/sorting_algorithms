#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * enum bool - Boolean values.
 * @false: = 0.
 * @true: = 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

void _print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void _swap_ints(int *a, int *b);

#endif
