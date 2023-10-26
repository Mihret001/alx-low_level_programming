#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit to 0
 * @n: decimal number to change
 * @index: position to change
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) & ~(num);
	return (1);
}
