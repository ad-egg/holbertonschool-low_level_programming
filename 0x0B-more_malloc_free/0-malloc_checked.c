#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory
 *
 * @b: how much memory space to allocate
 *
 * Return: pointer to string of allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);
	return (pt);
}
