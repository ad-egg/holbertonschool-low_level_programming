#include "holberton.h"

/**
 * _puts - prints a string
 *
 * @*str: pointer to string
 */

void _puts(char *str)
{
	char *n;

	n = str;

	while (n != '\0')
	{
		_putchar(*n);
		n++;
	}
	_putchar('\n');
}
