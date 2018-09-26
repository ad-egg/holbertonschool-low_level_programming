#include "holberton.h"

/**
 * puts_half - prints half of a string
 *
 * @str: half of this string will be printed
 */

void puts_half(char *str)
{
	int len;
	int a;
	int b;

	len = 0;

	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)
	{
		a = (len / 2);
		while (a < len)
		{
			_putchar(str[a]);
			a++;
		}
	}
	else
	{
		b = ((len - 1) / 2) + 1;

		while (b < len)
		{
			_putchar(str[b]);
			b++;
		}
	}
	_putchar('\n');
}
