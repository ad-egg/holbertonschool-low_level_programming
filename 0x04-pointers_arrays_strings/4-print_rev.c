#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer for the string
 */

void print_rev(char *s)
{
	int strlen;

	strlen = 0;

	while (s[strlen] != '\0')
	{
		strlen++;
	}
	strlen = strlen - 1;
	while (strlen >= 0)
	{
		_putchar(s[strlen]);
		strlen--;
	}
	_putchar('\n');
}
