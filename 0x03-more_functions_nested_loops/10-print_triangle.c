#include "holberton.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: triangle will be this size
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (y = 1; y < size; y++)
		{
			for (x = 1; x < size; x++)
			{
				if (y <= (size - x))
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
