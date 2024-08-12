#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of intergers
 *					in ascending order.
 * @list: A pointer to the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *nextNode, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		nextNode = current->next;
		temp = current->prev;

		while (temp && current->n < temp->n)
		{
			temp->next = current->next;

			if (current->next)
				current->next->prev = temp;

			current->prev = temp->prev;

			current->next = temp;

			if (temp->prev)
				temp->prev->next = current;
			else
				*list = current;

			temp->prev = current;

			print_list(*list);

			temp = current->prev;
		}
		current = nextNode;
	}
}
