#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t linked list
 * @head: points to head of listint_t linked list
 * Return: head node's data or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *nextnode, *temp;

	temp = *head;
	if (temp == NULL)
		return (0);
	data = temp->n;
	nextnode = (*head)->next;
	free(temp);
	*head = nextnode;
	return (data);
}
