#include "main.h"

/**
 * binary to unit - converts binary to unsinged int
 * @b: binary to be converted
 * Return: 0 if null or unsinged int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int x;

	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != 0 && b[x] != 10)
				return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	
		num <<= 1;

		if (b[x] == '1')
		num += 1;
	}
	return (num);
}
