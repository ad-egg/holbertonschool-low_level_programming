#include "holberton.h"

/**
 * _isalpha - Entry point
 *
 * @c: this variable is checked for whether or not it is a letter
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
