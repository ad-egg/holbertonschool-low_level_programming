#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points at beginning of list
 * @idx: index of list where the new node should be added
 * @n: data to be put into new node
 * Return: address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert, *findidx;
	unsigned int nonodes;

	if (head == NULL)
		return (NULL);
	findidx = *head;
	if (idx == 0)
	{
		insert = findidx;
		insert->n = n;
		insert->next = *head;
		*head = insert;
		return (insert);
	}
	for (nonodes = 0; findidx != NULL; nonodes++)
		findidx = findidx->next;
	if (nonodes < idx)
		return (NULL);
	findidx = *head;
	insert = malloc(sizeof(listint_t));
	if (insert == NULL)
		return (NULL);
	insert->n = n;
	for (nonodes = 0; nonodes < (idx - 1); nonodes++)
		findidx = findidx->next;
	insert->next = findidx->next;
	findidx->next = insert;
	return (insert);
}
