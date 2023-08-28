#include "lists.h"

/**
 * free_listint - free the momory allocated for a linked list.
 * @head: head of a list.
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	for (temp = head; temp != NULL; temp = head)
	{
		head = head->next;
		free(temp);
	}
}
