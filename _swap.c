#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: param A.
 * @b: param B.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
