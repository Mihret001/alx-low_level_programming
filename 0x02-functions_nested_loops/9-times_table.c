#include "main.h"

/**
 * times_table - prints the time table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k <= 9 && j != 9 && j != 0)
			{
			_putchar(' ');
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
			}
			else if (j == 0)
			{
				_putchar(j + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (k <= 9 && j == 9)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k > 9 && k != i * 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (k > 9 && j == 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
