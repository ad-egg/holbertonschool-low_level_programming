#include "holberton.h"

/**
 * _pow_recursion - raises x to the power of y
 *
 * @x: number that will be raised
 * @y: x will be raised to this power
 *
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
