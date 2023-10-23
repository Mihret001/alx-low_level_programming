#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end of a list
 * @head: head of a list
 * @n: integer to be inserted
 * Return: x
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x, *y;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	y = *head;
	while (y->next)
		y = y->next;
	y->next = x;
	return (x);
}
