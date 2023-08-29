#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list.
 * @head: the head node of a linked list.
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *h;
	listint_t *curr;

	if (head == NULL || *head == NULL)
		return (0);

	curr = *head;
	data = curr->n;
	h = curr->next;
	free(curr);
	*head = h;

	return (data);
}
