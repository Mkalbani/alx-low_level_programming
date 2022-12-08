#include "lists.h"

/**
 * free_dlistint - Free list
 * @head: pointer to head
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
