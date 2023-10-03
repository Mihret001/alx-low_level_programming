#include "main.h"
/**
 * _strspn - function that gets the length of prefix substring
 * @s: first value - char
 * @accept: second value - char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0;

	while (s[x] != '\0')
	{
		int y = 0;
		while (accept[y] != '\0' && s[x] != accept[y])
			y++;
		if (accept[y] == '\0')
			return (x);
		x++;
	}
	return (x);
}
