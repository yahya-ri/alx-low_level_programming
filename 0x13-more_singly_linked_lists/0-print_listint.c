#include "lists.h"

/**
 * print_listint - print every elements of a list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	for (nnodes = 0; h != NULL; h = h->next, nnodes++)
	{
		printf("%d\n", h->n);
	}
	return (nnodes);
}
