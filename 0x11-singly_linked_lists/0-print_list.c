#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}
