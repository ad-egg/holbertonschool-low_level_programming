#include "holberton.h"

/**
 * _pow - raises x to the power of y
 * @x: base number
 * @y: base number is raised to this power
 * Return: x to the power of y
 */
int _pow(int x, int y)
{
	int no = 1;

	for (; y > 1; y--)
		no *= x;
	return (no);
}

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	int n2, power = 0, temp;

	if (n < 0)
	{
		_putchar('-');
		n2 = n * -1;
	}
	else if (n == 0)
		_putchar(0 + '0');
	else
		n2 = n;
	temp = n2;
	for (; temp > 0; temp /= 10)
		power++;
	while (power > 0)
	{
		_putchar(n2 / _pow(10, power) + '0');
		n2 %= _pow(10, power);
		power--;
	}
}
