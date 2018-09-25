#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 * @*s: pointer to the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	char *n;
	int len;

	n = s;
	len = 0;

	while (*n != '\0')
	{
		n++;
		len++;
	}
	return (len);
}
