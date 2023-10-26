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
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = n >> index;

	return (hold & 1);
}
