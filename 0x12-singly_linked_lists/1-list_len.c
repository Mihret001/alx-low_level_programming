#include "lists.h"

/**
 * list_len - returns the number of elements in file list_t
 * @h: pointer to the file
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
