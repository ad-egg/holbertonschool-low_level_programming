#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using interpolation search algorithm
 * @array: pointer to beginning of array of integers
 * @value: value to be found in integer array
 * Return: index at which value can be found in integer array, or -1 if it
 * cannot be found
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0, high, mid;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	if (size == 1)
	{
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}
	high = size - 1;
	mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	if (mid > size)
	{
		printf("Value checked array[%u] is out of range\n", mid);
		return (-1);
	}
	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%u] = [%i]\n", mid, array[mid]);
		if (value < array[mid])
			high = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
		else
			return (mid);
	}
	if (array[low] == value)
		return (low);
	else
		return (-1);
}
