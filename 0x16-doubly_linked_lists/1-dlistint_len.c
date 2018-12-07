#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: points to beginning of linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nonodes;
	const dlistint_t *point;

	if (h == NULL)
		return (0);
	point = h;
	for (nonodes = 0; point != NULL; nonodes++)
		point = point->next;
	return (nonodes);
}
