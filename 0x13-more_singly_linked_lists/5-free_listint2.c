#include "lists.h"

/**
 * free_listint2 - free the momory allocated for a linked list.
 * @head: head of a list.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *base;

	if (head != NULL)
	{
		base = *head;
		for (temp = base; temp != NULL; temp = base)
		{
			base = base->next;
			free(temp);
		}
		*head = NULL;
	}
}
