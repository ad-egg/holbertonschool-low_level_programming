#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 * @list: pointer to the beginning of a doubly linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *move = *list, *swap, *temp;

	if ((move == NULL) || (list == NULL) || (move->next == NULL))
		return;
	while (move->next != NULL)
	{
		swap = move->next;
		if (move->n > swap->n)
		{
			temp = move;
			while ((temp != NULL) && (temp->n > swap->n))
			{
				temp->next = swap->next;
				if (temp->next != NULL)
					temp->next->prev = temp;
				swap->prev = temp->prev;
				if (swap->prev != NULL)
					swap->prev->next = swap;
				else
					*list = swap;
				temp->prev = swap;
				swap->next = temp;
				print_list(*list);
				temp = swap->prev;
			}
			continue;
		}
		move = move->next;
	}
}
