#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 *
 * @a: two dimensional array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumse;
	int sumne;

	sumse = 0;
	sumne = 0;

	for (i = 0; i < ((size * size)); (i += (size + 1)))
		sumse = (sumse + a[i]);
	for (i = (size - 1); i < (size * size - 1); i += size - 1
)
		sumne = (sumne + a[i]);
	printf("%d, %d\n", sumse, sumne);
}
