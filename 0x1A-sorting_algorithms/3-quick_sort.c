#include "sort.h"

/**
 * array_part - splits an array into a sub array by a pivot value
 * @array: pointer to integer array
 * @begin: beginning index of array
 * @end: ending index of array
 * @size: size of integer array
 * Return: index at which pivot value is placed
 */
int array_part(int *array, int begin, int end, size_t size)
{
	int i = begin - 1, temp, j;

	for (j = begin; j < end; j++)
	{
		if (array[j] < array[end])
		{
			i += 1;
			if (i != j)
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != end)
	{
		temp = array[end];
		array[end] = array[i + 1];
		array[i + 1] = temp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * q_sort - recursive function that sorts an array of integers in ascending
 * order
 * @array: pointer to integer array
 * @begin: beginning index of array
 * @end: end index of array
 * @size: size of integer array
 */
void q_sort(int *array, int begin, int end, size_t size)
{
	int part;

	if (begin < end)
	{
		part = array_part(array, begin, end, size);
		q_sort(array, begin, part - 1, size);
		q_sort(array, part + 1, end, size);
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
	if (array != NULL && size > 1)
		q_sort(array, 0, size - 1, size);
}
