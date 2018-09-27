#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: this array's content will be reversed
 * @n: this is how many elements are in the array that will be reversed
 */

void reverse_array(int *a, int n)
{
	int q;
	int p;

	q = 0;
	p = 0;

	while (p < n)
	{
		q = a[p];
		a[p] = a[n - 1];
		a[n - 1] = q;
		p++;
		n--;
	}
}
