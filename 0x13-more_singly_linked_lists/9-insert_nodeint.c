#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position in the list.
 * @head: head of a list.
 * @idx: index of the list where the new node is added.
 * @n: integer element.
 * Return: Address of the new node
 * or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newone;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	newone = malloc(sizeof(listint_t));
	if (newone == NULL)
		return (NULL);

	newone->n = n;

	if (idx == 0)
	{
		newone->next = *head;
		*head = newone;
	}
	else
	{
		newone->next = h->next;
		h->next = newone;
	}

	return (newone);
}
