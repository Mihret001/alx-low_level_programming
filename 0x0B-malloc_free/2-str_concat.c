#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: res or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int w, x, y, z;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (w = 0; s2[w] != '\0'; w++)
		;

	res = malloc(sizeof(char) * (w + x + 1));

	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (y = 0; y < x; y++)
		res[y] = s1[y];

	z = w;
	for (w = 0; w <= z; y++, w++)
		res[y] = s2[w];

	return (res);
}
