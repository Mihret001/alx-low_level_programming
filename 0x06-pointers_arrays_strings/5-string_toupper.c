#include "main.h"

/**
 * string_toupper - changes lowercase letters to upper case
 * @x: string to be checked
 * Return: x
 */

char *string_toupper(char *x)
{
	int y;

	for (y = 0; x[y] != '\0'; y++)
	{
		if (x[y] >= 'a' && x[y] <= 'z')
		{
			x[y] = x[y] - 32;
		}
	}
	return (x);
}
