#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at
 * a given index in the list.
 * @head: head of a list.
 * @index: index of the list where the node is deleted.
 * Return: 1 if deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pre;
	listint_t *next;

	i = 0;

	pre = *head;

	if (index != 0)
	{
		while (i < index - 1 && pre != NULL)
		{
			pre = pre->next;
			i++;
		}
	}

	if (pre == NULL || (pre->next == NULL && index != 0))
	{
		return (-1);
	}

	next = pre->next;

	if (index != 0)
	{
		pre->next = next->next;
		free(next);
	}
	else
	{
		free(pre);
		*head = next;
	}

	return (1);
}
