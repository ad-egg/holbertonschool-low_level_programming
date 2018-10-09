#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates a character array
 * and initializes it with a specific character
 *
 * @size: size of character array
 * @c: array will be initialized with this character
 *
 * Return: pointer to array or NULL if it fails, returns NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int i;

	if (size > 0)
	{
		pt = malloc(size * sizeof(char));
		if (pt == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		pt[i] = c;
	return (pt);
}
