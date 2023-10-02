#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: string
 * Return: s or Null
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; x != '\0'; x++)
		if (s[x] == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
}
