#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to beginning of list
 * @index: index of node, the nth number
 * Return: nth node of a listint_t linked list or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *noden;
	unsigned int countn, nonodes;

	if (head == NULL)
		return (NULL);
	noden = head;
	for (nonodes = 0; noden != NULL; nonodes++)
		noden = noden->next;
	if (nonodes < index)
		return (NULL);
	noden = head;
	for (countn = 0; countn < index; countn++)
		noden = noden->next;
	return (noden);
}
