#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: points to beginning of singly linked list
 * Return: pointer to beginning of reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
        listint_t *current = *head;
        listint_t *next;

        while(current != NULL)
        {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
        }
        *head = prev;
	return (*head);
}
