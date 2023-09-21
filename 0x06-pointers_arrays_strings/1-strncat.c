#include "main.h"

/**
 * _strncat - concatenates two strings using to a specific digit only
 * @dest: the first string
 * @src: the second string
 * @n: the number determining size of string to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && n > 0)
	{
		dest[x] = src[y];
		x++;
		y++;
		n--;
	}

	dest[x] = '\0';
	return (dest);
}
