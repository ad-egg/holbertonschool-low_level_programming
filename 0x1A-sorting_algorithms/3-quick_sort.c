#include "sort.h"

/**
 * array_part - splits an array into a sub array by a pivot value
 * @array: pointer to integer array
 * @begin: beginning index of array
 * @end: ending index of array
 * Return: index at which pivot value is placed
 */
unsigned int array_part(int *array, unsigned int begin, unsigned int end)
{
	unsigned int i = -1, j = begin;
	int temp;

	for (; j < end; j++)
	{
		if (array[j] < array[end])
		{
			i += 1;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
		if (j == end - 1)
		{
			temp = array[end];
			while (j > i + 1)
			{
				array[j] = array[j + 1];
				j--;
			}
			array[j] = temp;
		}
	}
	return (j);
}

/**
 * q_sort - recursive function that sorts an array of integers in ascending
 * order
 * @array: pointer to integer array
 * @begin: beginning index of array
 * @end: end index of array
 */
void q_sort(int *array, unsigned int begin, unsigned int end)
{
	unsigned int part;

	if (begin < end)
	{
		part = array_part(array, begin, end);
		q_sort(array, begin, part - 1);
		q_sort(array, part + 1, end);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using quick sort
 * method
 * @array: pointer to array of integers
 * @size: size of array of integers
 */
void quick_sort(int *array, size_t size)
{
	unsigned int begin = 0, end = size - 1;

	if (array != NULL && size > 1)
		q_sort(array, begin, end);
}
