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
	int i = 0;

	if ((list != NULL) && (*list != NULL) && ((*list)->next != NULL))
	{
		move = begin = end = *list;
		while (end->next != NULL)
			end = end->next;
		while (begin != end)
		{
			if (i == 0)
			{
				swap = move->next;
				if (move->next == end)
				{
					end = end->prev;
					i = 1;
				}
				if (move->n > swap->n)
				{
					swap_nodes(list, move, swap);
					continue;
				}
				move = move->next;
			}
			if (begin == end)
				break;
			if (i == 1)
			{
				swap = move->prev;
				if (move->prev == begin)
				{
					begin = begin->next;
					i = 0;
				}
				if (move->n < swap->n)
				{
					swap_nodes(list, swap, move);
					continue;
				}
				move = move->prev;
			}
		}
	}
}
