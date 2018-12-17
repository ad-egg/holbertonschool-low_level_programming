#include "holberton.h"

/**
 * print_last_digit - prints the last digit of n
 * @n: this variable is the number whose last digit will be checked
 * Return: the last digit of int n
 */

int print_last_digit(int n)
{
	int zz, n2;

	if (n >= 0)
		n2 = n;
	else
		n2 = n * -1;
	zz = n2 % 10;
	_putchar(zz + '0');
	return (zz);
}
