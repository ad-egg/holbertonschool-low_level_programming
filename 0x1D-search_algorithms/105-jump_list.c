#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * jump search algorithm
 * @list: pointer to first node of a singly linked list
 * @size: number of nodes in linked list
 * @value: value to be found in linked list
 * Return: pointer to first node where value is located, or NULL if it is not
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *forward, *back;
	unsigned int r, i;

	if (list == NULL)
		return (NULL);
	forward = list;
	if ((size == 0) || (size == 1 && forward->n != value))
		return (NULL);
	if (forward->n == value)
		return (forward);
	if (forward->n > value)
		return (NULL);
	r = sqrt(size);
	for (; forward->index < forward->index + r && forward->next != NULL; forward = forward->next)
		;
	while (forward->index < size && forward->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", forward->index, forward->n);
		if (forward->n == value)
			return (forward);
		back = forward;
		i = forward->index + r;
		for (; forward->index < i && forward->next != NULL; forward = forward->next)
			;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", back->index, forward->index);
	for (; back != forward; back = back->next)
	{
		printf("Value checked at index [%lu] = [%i]", back->index, back->n);
		if (back->n == value)
			return (back);
	}
	return (NULL);
}
