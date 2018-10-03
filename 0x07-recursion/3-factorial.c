#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: the number whose factorial will be returned
 *
 * Return: factorial of given number n, or 1 if n is 0 or 1, or -1 if n < 0
 */

int factorial(int n)
{
	if ((n == 1) || (n == 0))
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
