#include "lists.h"

/**
 * free_listint2 - frees a heap memory used
 * @head: head of a list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *y = NULL;

	if (head == NULL)
		return;
	temp = *x;
	while (x != NULL)
	{
		y = x;
		x = x->next;
		free(y);
	}
	*head = NULL;
}
