#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src including null byte
 *
 * @dest: the buffer where the string will be copied
 * @src: points out the string to be copied
 *
 * Return: the pointer to dest
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
