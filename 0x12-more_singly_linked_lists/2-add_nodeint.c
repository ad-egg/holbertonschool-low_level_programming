#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head of listint_t list
 * @n: data to be put in new node
 * Return: pointer to the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	int m;

	ptr = *head;
	m = n;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = m;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
