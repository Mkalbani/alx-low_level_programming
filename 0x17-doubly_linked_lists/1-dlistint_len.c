#include "lists.h"

/**
 * dlistint_len - a function returns the number
 * of elements in a linked list
 * @h: pointer to head
 *
 * Return: lenght of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	register int len = 0;


	if (h == NULL)
	{
		printf("%s", "Empty list");
	}
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
