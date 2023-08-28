#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list.
 * @head: head of a list.
 * @n: an element.
 * Return: address of the nw element.
 * or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *te;

	(void)te;

	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;
	te = *head;
	if (*head == NULL)
	{
		*head = nw;
	}
	else
	{
		for (; te->next != NULL; te = te->next)
		{
		}
		te->next = nw;
	}

	return (*head);
}
