#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer that points at list
 */

void free_listint(listint_t *head)
{
	listint_t *freed;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		freed = head;
		free(freed);
		head = head->next;
	}
}
