#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of a list
 * @head: head of a list
 * @n: integer to be inserted
 * Return: address of head
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;
	return (*head);
}
