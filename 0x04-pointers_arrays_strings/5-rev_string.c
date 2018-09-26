#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: this string will be reversed
 */

void rev_string(char *s)
{
	int a;
	int b;
	int c;
	int len;

	a = 0;
	len = 0;

	while (s[len] != '\0')
		len++;

	b = len - 1;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}
}
