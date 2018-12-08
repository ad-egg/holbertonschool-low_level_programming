#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: points to beginning of linked list
 * @n: integer to be put into new node
 * Return: pointer to new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	temp = *head;
	if (temp == NULL)
		new->next = NULL;
	else
	{
		new->next = temp;
		temp->prev = new;
	}
	*head = new;
	return (new);
}
