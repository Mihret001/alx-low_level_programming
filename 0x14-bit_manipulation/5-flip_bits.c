#include "main.h"

/**
 * flip_bits - gives number of bits to flip
 * @n: starting number
 * @m: final number
 * Return: number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	int x = 0;

	while (flip)
	{
		if (flip & 1)
			x++;
		flip >>= 1;
	}
	return (x);
}
