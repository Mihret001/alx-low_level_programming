#include "main.h"

/**
 * print_binary - gives binary forms of numbers
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int x;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (num = n, x = 0; (num >>= 1) > 0; x++)
		;

	for (; x >= 0; x--)
	{
		if ((n >> x) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
