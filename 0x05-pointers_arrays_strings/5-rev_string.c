#include "main.h"

/**
 * rev_string - prints reversed form of a string
 * @s: string that will be reversed
 * Return: y
 */

void rev_string(char *s)
{
	int x;
	int y;
	int z = 0;

	for (x = 0; s[x] != '\0'; x++)
		z++;
	for (x = 0; x < z / 2; x++)
	{
		y = s[x];
		s[x] = s[z - 1];
		s[z - 1 - x] = y;
	}

}
