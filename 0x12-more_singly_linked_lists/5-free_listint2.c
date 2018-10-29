#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: points to beginning of list
 */
void free_listint2(listint_t **head)
{
	listint_t *freethis;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		freethis = *head;
		free(freethis);
		head = head->next;
	}
	head = NULL;
}
