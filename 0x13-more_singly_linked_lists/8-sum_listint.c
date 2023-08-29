#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: head of a list.
 * Return: sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
	int sumofh;

	sumofh = 0;

	for (; head != NULL; head = head->next)
	{
		sumofh += head->n;
	}

	return (sumofh);
}
