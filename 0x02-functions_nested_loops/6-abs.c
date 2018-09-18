#include "holberton.h"

/**
 * _abs - Entry point
 *
 * @no: the absolute value of this variable is displayed
 * Return: Always 0 (Success)
 */

int _abs(int)
{
	int no;

	if (no > 0)
	{
		_putchar(no);
		_putchar('\n');
	}
	else if (no == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		_putchar(-no);
		_putchar('\n');
	}

	return (0);
}
