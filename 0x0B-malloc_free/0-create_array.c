#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * @size: size of an array
 * @c: initialization point *
 * Return: a pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int x;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));


	if (ar == 0)
		return (NULL);

	for (x = 0; x < size; x++)
		ar[x] = c;

	return (ar);
}
