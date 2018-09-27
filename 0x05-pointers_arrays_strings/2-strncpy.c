#include "holberton.h"

/**
 * _strncpy - copies a string
 *
 * @dest: string will be copied to here
 * @src: string to be copied
 * @n: string must have at least n bytes
 *
 * Return: pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; (len < n) && (src[len] != '\0'); len++)
	{
		dest[len] = src[len];
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
