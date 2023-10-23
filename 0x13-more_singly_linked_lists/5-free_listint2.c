#include "lists.h"

/**
 * free_listint2 - frees a heap memory used
 * @head: head of a list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
}
