#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *first;
	listint_t *last;

	first = list;
	last = list;
	while (list && first && first->next)
	{
		list = list->next;
		first = first->next->next;
		if (list == first)
		{
			list = last;
			last =  first;
			while (1)
			{
				first = last;
				while (first->next != list && first->next != last)
				{
					first = first->next;
				}
				if (first->next == list)
					break;
				list = list->next;
			}
			return (1);
		}
	}
	return (0);
}


