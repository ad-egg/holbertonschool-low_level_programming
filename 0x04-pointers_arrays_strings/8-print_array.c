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
	int elem;

	elem = 0;

	while (elem < n)
	{
		printf("%i", a[elem]);
		elem++;
		if (elem != n)
			printf(", ");
	}
	printf("\n");
}
