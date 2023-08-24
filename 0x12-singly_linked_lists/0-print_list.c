#include "lists.h"


/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t counts;

	counts = 0;
	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		
		counts++;
	}

	return (counts);
}

