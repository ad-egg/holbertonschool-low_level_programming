#include "holberton.h"

/**
 *
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
	char *begin;

	*begin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (begin);
}
