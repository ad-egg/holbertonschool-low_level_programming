#include "holberton.h"

/**
 * flip_bits - returns the number of bits you need to flip to get from n to m
 * @n: first integer
 * @m: second integer
 * Return: number of bits you need to flip, or 0 if big endian, or 1 if little
 * endian
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result, counter;

	counter = 0;
	result = (n ^ m);

	while (result != 0)
	{
		if (result & 1)
			counter++;
		result = result >> 1;
	}
	return (counter);
}
