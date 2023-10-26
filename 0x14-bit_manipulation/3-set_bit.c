#include "main.h"

/**
 * set_bit - sets value of a bit to 1
 * @n: number
 * @index: position to change
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num <<= index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	(*n) = (*n) | num;
	return (1);
}
