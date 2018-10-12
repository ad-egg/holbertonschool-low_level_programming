#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements of array
 * @size: size of each element of nmemb
 *
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		pt[i] = 0;
	return (pt);
}
