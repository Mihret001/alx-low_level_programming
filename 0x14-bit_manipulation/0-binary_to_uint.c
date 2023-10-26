#include "main.h"
#include <stdio.h>

/**
 * binary to unit - converts binary to unsinged int
 * @b: binary to be converted
 * Return: 0 if null or unsinged int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num1 = 0;
	unsigned int num2 = 1;
	int x;

	if (b == NULL)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		num1 <<= 1;
		if (b[x] == '1')
		{
			num1 ^= num2;
		}
	}
	return (num1);
}
