#include "holberton.h"

/**
 * _abs - Entry point
 *
 * @no: the absolute value of this variable is displayed
 *
 * Return: Always 0 (Success)
 */

int _abs(int no)
{
	if (no >= 0)
	{
		return (no);
	}
	else
	{
		return (no * -1);
	}
	_putchar('\n');

	return (0);
}
