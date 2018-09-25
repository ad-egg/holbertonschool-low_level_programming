#include "holberton.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: its value will be swapped with pointer b
 * @b: its value will be swapped with pointer a
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
