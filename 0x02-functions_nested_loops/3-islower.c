#include "holberton.h"

/**
 * _islower - checks for lowercase letter
 * @c: is checked for whether or not it is a lowercase character
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
