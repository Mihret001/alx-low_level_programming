#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new space in the memory
 * @str: the original string
 * Return: cp or NULL
 */
char *_strdup(char *str)
{
	char *cp;
	int x, y = 0;

	if (str == NULL)
		return (NULL);

	while (str[y])
		y++;

	cp = malloc((sizeof(char) * y) + 1);
	if (cp == NULL)
		return (NULL);

	for (x = 0; x < y; x++)
		cp[x] = str[x];
	cp[x] = '\0';

	return (cp);
}
