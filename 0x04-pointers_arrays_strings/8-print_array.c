#include "holberton.h"
#include <stdio.h>

/**
 *
 *
 *
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
