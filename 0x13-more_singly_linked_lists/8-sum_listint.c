#include "lists.h"

/**
 * sum_listint - gives sum of all data in linked files
 * @head: pointer to beginning of list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
