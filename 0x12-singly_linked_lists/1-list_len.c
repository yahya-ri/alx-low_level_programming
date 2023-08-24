#include "lists.h"

/**
 * list_len - will return the number of elements in a linked list_t list.
 * @h: singly linked list.
 * Return: the number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
