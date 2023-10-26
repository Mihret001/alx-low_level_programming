#include "main.h"
#include <stdio.h>

/**
 * get_bit - gives value of a bit at a given index
 * @n: number to be evaluated
 * @index: position that we want
 * Return: Value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
		return (0);

	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}

	return (-1);
}
