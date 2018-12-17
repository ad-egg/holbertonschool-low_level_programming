#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: this integer will be counted from to 98
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%i, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%i, ", n);
	}
	printf("98\n");
}
