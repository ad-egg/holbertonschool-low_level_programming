#include "search_algos.h"

/**
 * bin_search - searches for a value in a sorted array of integers
 * @array: pointer to array of integers
 * @begin: index to begin searching
 * @end: index to stop searching
 * @value: value to be found
 * Return: first index at which value can be found, or -1 if it is not in array
 */
unsigned int bin_search(int *array, unsigned int begin, unsigned int end,
		int value)
{
	unsigned int i, mid;

	printf("Searching in array: ");
	for (i = begin; i <= end; i++)
	{
		printf("%i", array[i]);
		if (i < end)
			printf(", ");
		else
			printf("\n");
	}
	if (begin == end)
	{
		if (array[end] == value)
			return (end);
		else
			return (-1);
	}
	mid = (begin + end) / 2;
	if (array[mid] > value)
		return (bin_search(array, begin, mid, value));
	else if (array[mid] < value)
		return (bin_search(array, mid + 1, end, value));
	else
		return (bin_search(array, begin, mid, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * binary search algorithm
 * @array: pointer to array of integers
 * @size: size of integer array
 * @value: value to be found
 * Return: index at which value can be found, or -1 if it is not in array
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	return (bin_search(array, 0, size - 1, value));
}
