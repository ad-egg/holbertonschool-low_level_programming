#include "sort.h"

/**
 * swap_nodes - swaps the position of two nodes in a doubly linked list
 * @list: pointer to first node of a doubly linked list
 * @a: one of the nodes whose position is to be swapped
 * @b: one of the nodes whose position to be swapped
 */
void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
	a->next = b->next;
	if (a->next != NULL)
		a->next->prev = a;
	b->prev = a->prev;
	if (b->prev != NULL)
		b->prev->next = b;
	else
		*list = b;
	a->prev = b;
	b->next = a;
}

/**
 * cocktail_sort_list - sorts a doubly linked list of integers in ascending
 * order using cocktail shaker sort
 * @list: pointer to first node of a doubly linked list
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *move = *list, *swap, *begin = *list, *end = *list;
	int s = 0;

	if ((move != NULL) && (list != NULL) && (move->next != NULL))
	{
		while (end->next != NULL)
			end = end->next;
		while (s == 0)
		{
			s = 1;
			while (move->next != end)
			{
				swap = move->next;
				if (move->n > swap->n)
					swap_nodes(list, move, swap);
				print_list(*list);
				move = move->next;
				s = 0;
			}
			end = end->prev;
			if (s == 1)
				break;
			while (move->prev != begin)
			{
				swap = move->prev;
				if (move->n < swap->n)
					swap_nodes(list, swap, move);
				print_list(*list);
				move = move->prev;
				s = 0;
			}
			begin = begin->next;
		}
	}
}
