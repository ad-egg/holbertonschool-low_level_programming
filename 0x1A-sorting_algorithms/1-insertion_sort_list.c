#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 * @list: pointer to the beginning of a doubly linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *move = *list, *swap, *temp, *back;

	if ((move == NULL) || (move->next == NULL))
		return;
	swap = move->next;
	while (swap != NULL)
	{
		if (move->n > swap->n)
		{
			if (move->prev == NULL)
			{
				swap->prev = NULL;
				*list = swap;
			}
			back = move;
			while (swap->prev != NULL)
			{
				if (back->n > swap->n)
				{
					temp = swap->next;
					swap->next = back;
					swap->prev = back->prev;
					back->prev = swap;
					back->next = temp;
					back = back->prev;
					swap = swap->prev;
					print_list(*list);
				}
				else
					break;
			}
			swap = move->next;
			continue;
		}
		move = move->next;
		swap = swap->next;
	}
}
