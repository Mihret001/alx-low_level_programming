#include "main.h"

/**
 * swap_int - swaps values of numbers
 * @a: first number
 * @b: second number
 * Return: a and b
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
