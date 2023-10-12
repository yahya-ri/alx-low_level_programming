#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: head of the list
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		for (; head != NULL; head = head->next)
		{
		    sum += head->n;
		}
	}

	return (sum);
}
