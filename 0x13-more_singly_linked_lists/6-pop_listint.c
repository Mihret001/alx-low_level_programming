#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of a list
*Return: deleted node
*/

int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (*head == NULL)
	return (0);

	x = *head;
	y = x->n;
	free(x);
	*head = (*head)->next;
	return (y);
}
