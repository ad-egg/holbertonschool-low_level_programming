#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: points at the beginning of a linked list
 * @index: node at this index is to be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp, *current = *head, *temp2;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		if (current->next != NULL)
		{
			temp = current->next;
			temp->prev = NULL;
			*head = temp;
		}
		free(current);
		return (1);
	}
	for (i = 0; (i < index) && (current->next); i++)
		current = current->next;
	temp = current->prev;
	if (i == index)
	{
		temp2 = current->next;
		temp->next = temp2;
		temp2->prev = temp;
	}
	else if ((i + 1) == index)
		temp->next = NULL;
	else
		return (-1);
	free(current);
	return (1);
}
