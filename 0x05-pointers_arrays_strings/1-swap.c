#include "main.h"
/**
 * swap_int -swaps the values of two integers
 * @a: integer to swap
 * @b: ger to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
