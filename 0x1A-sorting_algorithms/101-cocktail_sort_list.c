#include "sort.h"

/**
 * swap_nodes - swaps the position of two nodes in a doubly linked list
 * @list: pointer to beginning of doubly linked list
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
	print_list(*list);
}

/**
 * cocktail_sort_list - sorts a doubly linked list of integers in ascending
 * order using cocktail shaker sort
 * @list: pointer to first node of a doubly linked list
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *move, *swap, *begin, *end;
	int dir = 0, swapped = 0;

	if ((list != NULL) && (*list != NULL) && ((*list)->next != NULL))
	{
		move = begin = end = *list;
		while (end->next != NULL)
			end = end->next;
		while (begin != end)
		{
			if (dir == 0)
			{
				swap = move->next;
				if (move->next == end)
				{
					end = end->prev;
					dir = 1;
					if (swapped == 1)
						swapped = 0;
					else
						break;
				}
				if (move->n > swap->n)
				{
					swap_nodes(list, move, swap);
					swapped = 1;
					continue;
				}
				move = move->next;
			}
			if (begin == end)
				break;
			if (dir == 1)
			{
				swap = move->prev;
				if (move->prev == begin)
				{
					begin = begin->next;
					dir = 0;
					if (swapped == 1)
						swapped = 0;
					else
						break;
				}
				if (move->n < swap->n)
				{
					swap_nodes(list, swap, move);
					swapped = 1;
					continue;
				}
				move = move->prev;
			}
		}
	}
}
