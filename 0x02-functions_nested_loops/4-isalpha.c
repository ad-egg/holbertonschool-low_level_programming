#include "holberton.h"

/**
 * _isalpha - Entry point
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c);
{
	char c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}

	return (0);
}
