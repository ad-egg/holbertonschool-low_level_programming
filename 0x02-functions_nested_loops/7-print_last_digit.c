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
	if (n < 0)
	{
		return ((n % 10) * -1);
	}
	else
	{
		return (n % 10);
	}
}
