#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using linear
 * search algorithm
 * array: array of integers
 * size: size of int array
 * value: value to be found
 * Return: index in array where value is found, or -1 if it cannot be found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size && array[i] != value; i++)
		printf("Value checked array[%u] = [%i]\n", i, array[i]);
	if (i == size)
		return (-1);
	else
		return (i);
}
