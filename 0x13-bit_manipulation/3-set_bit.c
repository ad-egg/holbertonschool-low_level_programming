#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: points to unsigned long int
 * @index: position of bit whose value is to be set
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
