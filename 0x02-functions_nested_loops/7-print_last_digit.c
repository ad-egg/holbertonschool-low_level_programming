#include "holberton.h"

/**
 * print_last_digit - Entry point
 *
 * @n: this variable is the number whose last digit will be checked
 *
 * Return: the last digit of int n
 */

int print_last_digit(int n)
{
	int zz;

	zz = n % 10;

	if (n > 0)
	{
		_putchar(zz + '0');
		return (zz);
	}
	else
	{
		_putchar((zz * -1) + '0');
		return (zz * -1);
	}
}
