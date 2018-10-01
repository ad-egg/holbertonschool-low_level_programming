#define NULL ((char *)0)
#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to be searched
 * @accept: bytes here are to be located in s
 *
 * Return: pointer to byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (*s == *accept)
			return (s);
		s++;
	}
	return (NULL);
}
