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
	listint_t *insert, *findidx, *temp;
	unsigned int nonodes;

	if (head == NULL)
		return (NULL);
	findidx = *head;
	insert = malloc(sizeof(listint_t));
	if (insert == NULL)
		return (NULL);
	if (idx == 0)
	{
		insert->next = findidx;
		insert->n = n;
		*head = insert;
		return (insert);
	}
	for (nonodes = 0; findidx != NULL; nonodes++)
		findidx = findidx->next;
	if (nonodes < idx)
	{
		free(insert);
		return (NULL);
	}
	findidx = *head;
	for (nonodes = 0; nonodes < idx; nonodes++)
	{
		temp = findidx;
		findidx = findidx->next;
	}
	temp->next = insert;
	insert->n = n;
	insert->next = findidx;
	return (insert);
}
