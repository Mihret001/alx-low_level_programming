#include "lists.h"

/**
 * sum_listint - gives sum of all data in linked file
 * @head: pointer to beginning of list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
