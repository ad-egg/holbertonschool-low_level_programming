#include "search_algos.h"

/**
 * bin_search - searches for a value in a sorted array of integers
 * @array: pointer to array of integers
 * @begin: index to begin searching
 * @end: index to stop searching
 * @value: value to be found
 * Return: index at which value can be found, or -1 if it is not in array
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
		return (bin_search(array, begin, mid - 1, value));
	else if (array[mid] < value)
		return (bin_search(array, mid + 1, end, value));
	else
		return (mid);
}

/**
 * _pow_r - raises x to the power of y
 * @x: number that will be raised
 * @y: x will be raised to this power
 * Return: value of x raised to the power of y
 */

unsigned int _pow_r(unsigned int x, unsigned int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_r(x, y - 1));
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: pointer to beginning of array of integers
 * @size: size of array of integers
 * @value: value to be found in integer array
 * Return: index at which value can be found, or -1 if it can't be found
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int a, b, power = 0;

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
	b = _pow_r(2, power);
	for (; b < size; power++)
	{
		printf("Value checked array[%u] = [%i]\n", b, array[b]);
	}
}
