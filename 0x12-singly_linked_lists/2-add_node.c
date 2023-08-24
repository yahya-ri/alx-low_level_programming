#include "lists.h"
/**
 * add_node - will add a new node at the beginning of a list.
 * @head: the first node.
 * @str: string to store in the list.
 * Return: the address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	n = 0;
	while (str[n])
	{
		n++;
	}

	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
