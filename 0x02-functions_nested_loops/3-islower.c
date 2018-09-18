#include "holberton.h"

/**
 * _islower - Entry point
 *
 * @c: is checked for whether or not it is a lowercase character 
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
