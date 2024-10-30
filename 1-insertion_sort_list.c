#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list of integers
 *  in ascending order using insertion sort algorithm
 * @list: list of integers
 *
 * Retrun: void
 */

void insertion_sort_list(listint_t **list)
{

	if (!list || !*list || !(*list)->next)
		return;

	listint_t *current = (*list)->next;

	while (current)
	{
		listint_t *next = current->next;
		listint_t *tmp = current;

		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			listint_t *node1 = tmp->prev;
			listint_t *node2 = tmp;


			if (node1->prev)
				node1->prev->next = node2;

			else
				*list = node2;

			if (node2->next)
				node2->next->prev = node1;

			node1->next = node2->next;
			node2->prev = node1->prev;
			node1->prev = node2;
			node2->next = node1;

			print_list(*list);
		}
		current = next;
	}

}
