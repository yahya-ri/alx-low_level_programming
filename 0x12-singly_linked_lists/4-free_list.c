#include "lists.h"

/**
 * free_list - will free a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *n;

	for (n = head; n != NULL; n = head)
	{
		head = head->next;
		free(n->str);
		free(n);
	}
}
