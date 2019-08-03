#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t list
 * @head: pointer to beginning of list
 * Return: sum of all the data of a listint_t list or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *addn;
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	addn = head;
	while (addn != NULL)
	{
		sum += addn->n;
		addn = addn->next;
	}
	return (sum);
}
