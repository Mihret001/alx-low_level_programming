#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head of a list
 * Return: x
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
