#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list of integers in ascending order
 *
 *
 * Retrun: void
 */

void insertion_sort_list(listint_t **list)
{
	if (!list || !*list || !(*list)->next)
		return;

	listint_t *current = (*list)->next;

	while(current)
	{
		*next = current->next;
		*tmp = current;

		while (tmp->prev && tmp->n < tmp->prev->n);
		{
			if (!tmp->prev || !tmp || list == tmp)
				return;

			print_list(*list);
	}

	current = next;

}
