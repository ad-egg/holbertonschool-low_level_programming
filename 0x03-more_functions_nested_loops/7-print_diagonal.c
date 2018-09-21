#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: this variable determines the position of the bottom of the diagonal line
 */

void print_diagonal(int n)
{
	int y;
	int space;

	space = n - 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n ; y++)
		{
			for (space = 0; space < y; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

		}
	}
}
