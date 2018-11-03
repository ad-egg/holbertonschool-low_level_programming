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
	unsigned long int result, counter;

	counter = 0;
	result = (n ^ m);

	while (result != 0)
	{
		counter += result & 1;
		result = result >> 1;
	}
	return (counter);
}
