#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to beginning of a linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *gone;

	if (head == NULL)
		return;
	temp = head;
	while (temp != NULL)
	{
		gone = temp;
		temp = temp->next;
		free(gone);
	}
}
