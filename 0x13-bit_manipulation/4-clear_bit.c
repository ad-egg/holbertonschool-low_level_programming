#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: points to integer
 * @index: position of bit to be cleared
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
