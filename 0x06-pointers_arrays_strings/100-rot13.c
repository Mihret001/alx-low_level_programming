#include "main.h"

/**
 * rot13 -  makes a string by using rot13
 * @s: string that is gonna be created
 * Return: s
 */

char *rot13(char *s)
{
	int x, y;
	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == s1[y])
			{
				s[x] = s2[y];
				break;
			}
		}
	}

	return (s);

}
