#include "holberton.h"

/**
 * print_sign - Entry point
 *
 * @n: this variable is checked for its sign
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
	else
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}

	return (0);
}
