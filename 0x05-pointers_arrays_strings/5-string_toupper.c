#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: this string will be changed to uppercase
 *
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	char *up = str;

	while (*str != '\0')
	{
		if ((*str > 'a') && (*str <= 'z'))
		{
			*str = (*str - 32);
		}
		str++;
	}
	return (up);
}
