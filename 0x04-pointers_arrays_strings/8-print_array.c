#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array that will have n elements printed
 * @n: number of elements of the array that will be printed
 */

void print_array(int *a, int n)
{
	int rep;

	rep = 0;

	while (rep < n)
	{
		printf("%i", a[rep]);
		rep++;
		if (rep != n)
			printf(", ");
	}
	printf("\n");
}
