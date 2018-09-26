#include "holberton.h"

/**
 * puts2 - prints one char out of two of a string
 *
 * @str: every other letter of this string will be printed
 */

void puts2(char *str)
{
	int ind;

	ind = 0;

	while (str[ind] != '\0')
	{
		if ((ind % 2) == 0)
		{
			_putchar(str[ind]);
		}
		ind++;
	}
	_putchar('\n');
}
