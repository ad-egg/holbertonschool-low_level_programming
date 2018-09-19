#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * @n: this integer will be counted from to 98
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98");
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98");
	}
	putchar('\n');
}
