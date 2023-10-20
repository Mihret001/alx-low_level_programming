#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to head of list
 * @str: pointer to string
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x, *y;
	size_t z;

	new = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	x->str = strdup(str);

	for (z = 0; str[z]; z++)
		;

	x->len = z;
	x->next = NULL;
	y = *head;

	if (y == NULL)
	{
		*head = x;
	}
	else
	{
		while (y->next != NULL)
			y = y->next;
		y->next = x;
	}

	return (*head);
}
