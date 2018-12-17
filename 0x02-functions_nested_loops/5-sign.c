#include "holberton.h"

/**
 * print_sign - prints the sign of an integer
 * @n: this variable is checked for its sign
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is negative
 */

int print_sign(int n)
{
	int val;
	if (n > 0)
	{
		_putchar('+');
		val = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		val = -1;
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		val = 0;
	}
	return (val);
}
