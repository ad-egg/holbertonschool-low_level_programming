#include "holberton.h"

/**
 * print_square - prints a square
 * @size: this variable determines the dimensions of the square
 */

void print_square(int size)
{
	int x;
	int y;


	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
