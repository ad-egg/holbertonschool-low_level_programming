#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using bubble
 * sort method
 * @array: an array of integers
 * @size: size of the integer array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, end = size - 1;
	int temp, swapped;

	if ((array == NULL) || (size == 1))
		return;
	while (i < end)
	{
		swapped = 0;
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			swapped = 1;
			print_array(array, size);
		}
		i++;
		if (i == end)
		{
			if (swapped != 0)
			{
				i = 0;
				end--;
			}
			else if (swapped == 0)
				return;
		}
	}
}
