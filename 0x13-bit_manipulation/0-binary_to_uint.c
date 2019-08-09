#include "holberton.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a character string of 0 and 1 characters
 * Return: the converted number or 0 if pointer b is NULL
 * or if there are characters in b that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	unsigned int i, base;

	uint = 0;
	base = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i + 1] != '\0'; i++)
		;
	do{
		if ((b[i] == '0') || (b[i] == '1'))
		{
			if (b[i] == '1')
				uint += base;
			base = base * 2;
			i--;
		}
		else
			return (0);
	} while (i > 0)
	return (uint);
}
