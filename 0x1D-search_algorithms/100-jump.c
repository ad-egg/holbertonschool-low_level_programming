#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a soted array of integers using
 * jump search algorithm
 * @array: pointer to beginning of array of integers
 * @size: size of array of integers
 * @value: value to be found in array
 * Return: index in array at which value can be found, or -1 if it's not there
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int i = 0, j = 0, r;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	if (size == 1)
	{
		printf("Value checked array[0] = [%i]\n", array[0]);
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}
	r = sqrt(size);
	for (; array[i] < value && i < size - 1; i += r)
	{
		printf("Value checked array[%u] = [%i]\n", i, array[i]);
		j = i;
	}
	printf("Value found between indexes [%u] and [%u]\n", j, i);
	for (; j <= i && j < size; j++)
	{
		printf("Value checked array[%u] = [%i]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
