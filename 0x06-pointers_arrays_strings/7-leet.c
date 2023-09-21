#include "main.h"

/**
 * leet - encodes a string into 1337
 * @x: input value
 * Return: x
 */

char *leet(char *x)
{
	int z, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (z = 0; x[z] != '\0'; z++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x[z] == s1[y])
			{
				x[z] = s2[y];
			}
		}
	}
	return (x);
}
