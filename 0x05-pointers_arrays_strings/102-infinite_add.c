#include "holberton.h"
#include <stdlib.h>

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
 * _itoa - converts integer into characters to be printed
 * @n: integer to be converted
 * @str: string to be written into
 * Return: pointer to character string
 */
void *_itoa(int n, char *str)
{
	int i, n2;

	i = 0;

	if (n < 0)
		n2 = (n * (-1));
	else
		n2 = n;
	while (n2 > 0)
	{
		str[i] = ((n2 % 10) + '0');
		n2 = (n2 / 10);
		i++;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';

	rev_string(str);
	return (str);
}

/**
 * infinite_add - adds two numbers
 * @n1: first integer to be added
 * @n2: second integer to be added
 * @r: buffer to store the answer
 * size_r: size of buffer to be allocated for answer
 * Return: pointer to buffer that is storing the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int no1, no2, ans;

	no1 = atoi(n1);
	no2 = atoi(n2);
	ans = no1 + no2;
	r = malloc(size_r);
	if (r == NULL)
		return (NULL);
	_itoa(ans, r);
	return (r);
}
