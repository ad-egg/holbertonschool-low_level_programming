#include "holberton.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: n bytes of memory from src will be copied to here
 * @src: memory to be copied
 * @n: how many bytes of memory to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int o;

	o = 0;

	while (o < n)
	{
		dest[o] = src[o];
		o++;
	}
	return (dest);
}
