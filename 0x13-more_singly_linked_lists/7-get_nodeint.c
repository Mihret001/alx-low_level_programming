#include "lists.h"

/**
 * get_nodeint_at_index - finds a node in a list
 * @head: head of a list
 * @index: location of node to be found
 * Return: head
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
