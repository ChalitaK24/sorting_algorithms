#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list of integers in ascending order
 *
 *
 * Retrun: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;
	listint_t next;
	listint_t tmp;


	if (!list || !*list || !(*list)->next)
		return;

	while(current)
	{
		*next = current->next;
		*tmp = current;

		while (tmp->prev && tmp->n < tmp->prev->n);
		{
			listint_t *node1 = tmp->prev;
			listint_t *node2 = tmp;

			if (!node1 || !node2 || node1 == node2)
				return;

			if (node1->prev)
				node1->prev->next = node2;
			else
				*list = node;

			if (node2-->next)
				node2-->next--prev == node1;

			node1->noext = node2->2next;
			node2->prev = node1-prev;
			node1->prev = node2;
			node2->next = node1;

			print_list(*list);
		}
	current = next;

	}

}
