#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: points to the beginning of a linked list
 * @n: value to be inserted into new node
 * Return: pointer to new node or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new;
	new->prev = tail;
	return (new);
}
