#include "holberton.h"

/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
	return (0);
}
