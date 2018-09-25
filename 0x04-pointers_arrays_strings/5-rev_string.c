#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @*s: the string at this pointer gets reversed
 */

void rev_string(char *s)
{
	int regular;
	int reverse;
	int n;
	char *original;

	regular = 0;
	reverse = 0;
	*original = s;

	while (*s != '\0')
	{
		reverse++;
		s++;
	}
	reverse--;
	while (regular <= reverse)
	{
		n = *(original + regular);
		*(original + regular) = *(original + reverse);
		*(original + reverse) = n;
		regular++;
		reverse--;
	}
	_putchar('\n');
}
