#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to function that compares values
 *
 * Return: index of first element for which cmp function does not return 0
 * if no element matches, return -1
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
