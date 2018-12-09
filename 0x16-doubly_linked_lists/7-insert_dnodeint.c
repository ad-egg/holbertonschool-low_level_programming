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
	dlistint_t *new, *current = *h, *temp;

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
			current->prev = new; }
		*h = new; }
	else if (idx > 0)
	{
		for (i = 0; (i < idx) && (current->next); i++)
			current = current->next;
		if (i == idx)
		{
			temp = current->prev;
			temp->next = new;
			new->prev = temp;
			new->next = current;
			current->prev = new; }
		else if ((i + 1) == idx)
		{
			current->next = new;
			new->prev = current;
			new->next = NULL; }
		else
		{
			free(new);
			return (NULL); } }
	return (new); }
