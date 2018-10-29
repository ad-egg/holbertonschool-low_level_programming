#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head of listint_t list
 * @n: data to be entered into new node
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *appended;
	listint_t *current;
	int m;

	m = n;
	current = *head;
		appended = malloc(sizeof(listint_t));
	if (appended == NULL)
		return (NULL);
	appended->n = m;
	appended->next = NULL;
	if (current == NULL)
		*head = appended;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = appended;
	}
	return (appended);
}
