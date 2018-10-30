#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to listint_t list
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nonodes;

	if (h == NULL)
		nonodes = 0;
	for (nonodes = 0; h != NULL; nonodes++)
		h = h->next;
	return (nonodes);
}