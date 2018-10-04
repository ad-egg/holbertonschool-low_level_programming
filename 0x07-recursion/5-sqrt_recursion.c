#include "holberton.h"
int checksqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number whose square root will be returned
 *
 * Return: natural square root of n,
 * if n does not have a natural square root, return -1
 */

int _sqrt_recursion(int n)
{
	if ((n == 0) || (n == 1))
		return (n);
	else if (n < 0)
		return (-1);
	return (checksqrt(n, 1));
}

/**
 * checksqrt - checks for natural square root of a number
 *
 * @n: number who will be checked for natural square root
 * @i: variable used to test for whether n has natural square root
 *
 * Return: natural square root of n, if none return -1
 */

int checksqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);
	return (checksqrt(n, i + 1));
}

