#include "holberton.h"

/**
 * _isdigit - checks for whether or not c is a digit
 *
 * @c: this variable gets checked for whether or not it is a digit
 *
 * Return: 1 if c is digit, 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
