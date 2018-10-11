#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers
 *
 * @min: values in array begin at this value
 * @max: values in array end at this value
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *array;
	int total;
	int i;

	if (min > max)
		return (NULL);
	total = (max - min + 1);
	array = malloc(sizeof(int) * total);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
