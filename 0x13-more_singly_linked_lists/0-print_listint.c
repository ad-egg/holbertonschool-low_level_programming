#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: points to a listint_t list
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t nonodes;

	if (h == NULL)
		nonodes = 0;
	for (nonodes = 0; h != NULL; nonodes++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (nonodes);
}
