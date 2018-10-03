#include "holberton.h"

/**
 * _strlen_recursion - returns length of a string
 *
 * @s: string that will be measured
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
