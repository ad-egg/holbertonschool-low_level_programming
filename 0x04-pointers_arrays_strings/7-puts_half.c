#include "holberton.h"

/**
 * puts_half - prints half of a string
 *
 * @str: half of this string will be printed
 */

void puts_half(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
		str = (str - (len / 2));
	else
		str = (str - ((len - 1) / 2));
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
