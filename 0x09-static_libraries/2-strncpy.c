#include "main.h"

/**
 * _strncpy - copies one string into another
 * @dest: first string
 * @src: second string
 * @n: number determining length of string to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
