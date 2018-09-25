#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string at this pointer gets reversed
 */

void rev_string(char *s)
{
	int index;
	int reverse;
	int n;
	char *original;

	index = 0;
	reverse = 0;
	*original = s;

	while (*s != '\0')
	{
		reverse++;
		s++;
	}
	reverse--;
	while (index <= reverse)
	{
		n = *(original + index);
		*(original + index) = *(original + index);
		*(original + reverse) = n;
		index++;
		reverse--;
	}
	_putchar('\n');
}
