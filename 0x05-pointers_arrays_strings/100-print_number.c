#include <stdlib.h>
#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: this string will be reversed
 */
void rev_string(char *s)
{
	int a, b, c, len;

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

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	char *no;
	int i = 0, n2, temp;

	if (n < 0)
		n2 = n * -1;
	else if (n > 0)
		n2 = n;
	else
	{
		_putchar(0 + '0');
		return;
	}
	temp = n2;
	while (temp > 0)
	{
		temp /= 10;
		i++;
	}
	if (n < 0)
		i += 1;
	no = malloc(sizeof(char) * i);
	if (no == NULL)
		return;
	for (i = 0; n2 > 0; i++)
	{
		no[i] = ((n2 % 10) + '0');
		n2 /= 10;
	}
	if (n < 0)
		no[i++] = '-';
	no[i] = '\0';
	rev_string(no);
	for (i = 0; no[i] != '\0'; i++)
		_putchar(no[i]);
	free(no);
}
