#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * list_len - counts number of elements in a linked list_t list
 * @h: pointer to list_t list
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
