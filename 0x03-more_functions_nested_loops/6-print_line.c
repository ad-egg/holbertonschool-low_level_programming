#include "holberton.h"

/**
 * print_line - prints a line unless n is less than 0
 *
 * @n: there will be underscores printed for n times
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}
