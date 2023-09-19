#include "main.h"

/**
 * print_diagonal - prints lines diagonally
 * @n: position where the diagonal line appears
 * Return: n
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (n > 0 && x == y)
			{
				_putchar('\\');
			}
			else if (n > 0 && x != y)
			{
				_putchar(' ');
			}
			else if (n <= 0)
			{
				_putchar('\n');
			}
		}
	_putchar('\n');
	}
}
