#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program.
 * @ac: arguments count
 * @av: arguments vector
 * Return: res or NULL
 */
char *argstostr(int ac, char **av)
{
	char *res, *s;
	int x, y, z, w = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		s = av[x];
		y = 0;

		while (s[y++])
			w++;
		w++;
	}

	res = malloc(sizeof(char) * (w + 1));
	if (res == NULL)
		return (NULL);

	for (x = 0, y = 0; x < ac && y < w; x++)
	{
		s = av[x];
		y = 0;

		while (s[y])
		{
			res[y] = s[y];
			z++;
			y++;
		}
		res[y++] = '\n';
	}
	res[y] = '\0';

	return (res);
}
