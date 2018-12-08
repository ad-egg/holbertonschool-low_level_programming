#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: points at beginning of linked list
 * @idx: index at which to insert new node
 * @n: data to be entered into new node
 * Return: pointer to new node or NULL if it failed or
 * if index idx does not exist
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *current;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current = *h;
	/* what if idx is 0 and list empty */
	for (i = 0; (i < idx) && (current != NULL); i++)
		current = current->next;
	/* what if idx is 0 and list not empty */
	if (current == NULL)
		return (NULL);
	if (current->prev == NULL)
	{
		current->prev = new;
		new->next = current;
		new->prev = NULL;
		return (new);
	}
	if (i == idx)
	{
		/* insert it as last node */
	}
}
