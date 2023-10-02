#include "main.h"

/**
 * print_line - prints a line depending on value of n
 * @n: number that determines how long the line will be
 * Return: n
 */

void print_line(int n)
{
	int x = 0;

	while (x < n)
		if (n > 0)
	{
		_putchar('_');
	x++;
	}
		else
		{
		_putchar('\n');
		}
	_putchar('\n');
}
