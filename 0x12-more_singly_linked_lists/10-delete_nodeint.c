#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to beginning of list
 * @index: node at this index will be deleted
 * Return: 1 on success, -1 at failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		temp = current->next;
		free(current);
		*head = temp;
		return (1);
	}
	for (i = 0; current != NULL; i++)
		current = current->next;
	if (i < index)
		return (-1);
	current = *head;
	for (i = 0; i < (index - 1); i++)
		current = current->next;
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
