#include "main.h"

/**
 * _memcpy - copies n bytes from memory area to another
 * @n: bytes
 * @src: source
 * @dest: destination
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = *src;

	return (dest);
}
