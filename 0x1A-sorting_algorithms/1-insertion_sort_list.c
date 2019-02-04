#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 * @list: pointer to the beginning of a doubly linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *move = *list, *swap, *temp, *back, *forward;

	if ((list == NULL) || (move == NULL) || (move->next == NULL))
		return;
	while (move->next != NULL)
	{
		swap = move->next;
		if (move->n > swap->n)
		{
			temp = move;
			while ((temp != NULL) && (temp->n > swap->n))
			{
				forward = swap->next;
				temp->next = forward;
				if (forward != NULL)
					forward->prev = temp;
				swap->next = temp;
				back = temp->prev;
				temp->prev = swap;
				swap->prev = back;
				if (back == NULL)
				{
					*list = swap;
					print_list(*list);
					break;
				}
				back->next = swap;
				print_list(*list);
				temp = swap->prev;
			}
			continue;
		}
		move = move->next;
	}
}
