#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer to be iterated through
 * @index: position of bit
 * Return: value of bit at given index or -1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	if (index > 63)
		return (-1);
	i = n & (1 << index);
	return (i);
}
