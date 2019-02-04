#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * selection sort method
 * @array: pointer to array of integers
 * @size: size of integer array
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	unsigned int i, j, k = 1, min;

	if ((array == NULL) || (size <= 1))
		return;
	for (i = 0; i < size - 1; i++)
	{
		j = k;
		min = i;
		while (j < size)
		{
			if (array[min] > array[j])
				min = j;
			j++;
		}
		if (min > i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
		k++;
	}
}
