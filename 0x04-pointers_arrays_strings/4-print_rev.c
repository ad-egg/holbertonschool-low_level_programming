#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 * @*s: pointer for the string
 */

void print_rev(char *s)
{
	int strlen;

	strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	while (strlen != 0)
	{
		_putchar(s[strlen]);
		strlen--;
		s--;
	}
	_putchar('\n');
}
