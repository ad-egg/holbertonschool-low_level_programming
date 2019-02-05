#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using quick sort
 * method
 * @array: pointer to array of integers
 * @size: size of array of integers
 */
void quick_sort(int *array, size_t size)
{
	if ((array == NULL) || (size <= 1))
		return;
}



int pivot = size - 1, end = size - 1, i = -1, j = 0, temp;

while (j < end)
{
	if (array[pivot] > array[j])
	{
		i++;
		temp = array[i];
		array[i] = array[j];
		array[j] = array[i];
	}
	j++;
	if (j == end - 1)
	{
/* need insert the pivot into index i+1 */
		k = i + 1;
		temp = array[pivot];
		pivot = temp;
/* now pivot holds pivot value, loop shifts everything after i+1 */
		while (j < k)
		{



		}
	}
}
