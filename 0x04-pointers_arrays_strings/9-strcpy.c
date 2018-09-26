#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src including the null byte
 *
 * @dest: the string will be printed to this buffer
 * @src: points out the string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int n;

	n = 0;

	for (len = 0; src[len] != '\0'; len++);
	while (n < len)
	{
		dest[n] = src[n];
		n++;
	}
	return (*dest);
}
