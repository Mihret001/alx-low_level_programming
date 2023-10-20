#include "lists.h"
/**
 * add_node - add a new node to list_t
 * @head: pointer to header of the list
 * @str: pointer to string
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int y;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
	{
		y++;
	}
	x->len = y;
	x->str = strdup(str);
	x->next = *head;
	*head = x;

	return (*head);
}
