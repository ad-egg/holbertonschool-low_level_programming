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
	dlistint_t *new, *current, *temp;

	current = *h;
	if ((idx > 0) && (current == NULL))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		if (current == NULL)
			new->next = NULL;
		else
		{
			new->next = current;
			current->prev = new;
		}
		*h = new;
		return (new);
	}
	for (i = 0; (i < idx) && (current); i++)
		current = current->next;
	if (current == NULL)
		return (NULL);
	temp = current->prev;
	new->prev = temp;
	temp->next = new;
	new->next = current;
	current->prev = new;
	return (new);
}
