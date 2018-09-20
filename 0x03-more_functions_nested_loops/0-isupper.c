#include "holberton.h"

/**
 * _isupper - checks if c is an uppercase letter or not
 *
 * @c: this variable is checked for whether or not it is an uppercase letter
 *
 * Return: 1 if c is uppercase letter, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
