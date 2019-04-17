#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * binary search algorithm
 * @array: pointer to array of integers
 * @size: size of integer array
 * @value: value to be found
 * Return: index at which value can be found, or -1 if it is not in array
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%i", array[i]);
		if (i < size - 1)
			printf(", ");
		else
			printf("\n");
	}
	i = size / 2;
	if (array[i] > value)
		return (binary_search(&array[0], i, value));
	else if (array[i] < value)
		return (binary_search(&array[i], i, value));
	else
		return (i);
}
