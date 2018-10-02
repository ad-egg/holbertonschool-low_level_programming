#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: points to memory area to be filled
 * @b: constant byte to fill memory area with
 * @n: first n bytes of memory area pointed to by s will be filled with b
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int o;

	o = 0;

	while (o < n)
	{
		*s = b;
		s++;
		o++;
	}
	return (s);
}
