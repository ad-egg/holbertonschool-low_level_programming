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
	pt = (char *)malloc(nmemb * size + 1);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		pt[i] = 0;
	i++;
	pt[i] = '\0';
	return (pt);
}
